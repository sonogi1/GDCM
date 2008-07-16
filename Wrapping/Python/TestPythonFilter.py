############################################################################
#
#  Program: GDCM (Grass Root DICOM). A DICOM library
#  Module:  $URL$
#
#  Copyright (c) 2006-2008 Mathieu Malaterre
#  All rights reserved.
#  See Copyright.txt or http://gdcm.sourceforge.net/Copyright.html for details.
#
#     This software is distributed WITHOUT ANY WARRANTY; without even
#     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
#     PURPOSE.  See the above copyright notice for more information.
#
############################################################################

import gdcm
import sys

r = gdcm.Reader()
r.SetFileName('test.acr')
r.Read()

f = gdcm.PythonFilter()
f.SetFile( r.GetFile() )
t = gdcm.Tag( 0x0, 0x1 )
print f.ToPyObject( t )
