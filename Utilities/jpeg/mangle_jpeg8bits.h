#ifndef gdcm_jpeg8_mangle_h
#define gdcm_jpeg8_mangle_h

/* 

This header file mangles all symbols exported from the jpeg library.
It is included in all files while building the jpeg library.  Due to
namespace pollution, no jpeg headers should be included in .h files in
GDCM. This also allows us to generate two jpeg library (8bits and 12bits).

The following command was used to obtain the symbol list:

nm libgdcmjpeg8.a | grep " [R|T] " | colrm 1 11 | sort
*/


#define jcopy_block_row gdcm_jpeg8_jcopy_block_row
#define jcopy_sample_rows gdcm_jpeg8_jcopy_sample_rows
#define jdiv_round_up gdcm_jpeg8_jdiv_round_up
#define jinit_1pass_quantizer gdcm_jpeg8_jinit_1pass_quantizer
#define jinit_2pass_quantizer gdcm_jpeg8_jinit_2pass_quantizer
#define jinit_arith_decoder gdcm_jpeg8_jinit_arith_decoder
#define jinit_arith_encoder gdcm_jpeg8_jinit_arith_encoder
#define jinit_c_codec gdcm_jpeg8_jinit_c_codec
#define jinit_c_coef_controller gdcm_jpeg8_jinit_c_coef_controller
#define jinit_c_diff_controller gdcm_jpeg8_jinit_c_diff_controller
#define jinit_c_main_controller gdcm_jpeg8_jinit_c_main_controller
#define jinit_c_master_control gdcm_jpeg8_jinit_c_master_control
#define jinit_c_prep_controller gdcm_jpeg8_jinit_c_prep_controller
#define jinit_c_scaler gdcm_jpeg8_jinit_c_scaler
#define jinit_color_converter gdcm_jpeg8_jinit_color_converter
#define jinit_color_deconverter gdcm_jpeg8_jinit_color_deconverter
#define jinit_compress_master gdcm_jpeg8_jinit_compress_master
#define jinit_d_codec gdcm_jpeg8_jinit_d_codec
#define jinit_d_coef_controller gdcm_jpeg8_jinit_d_coef_controller
#define jinit_d_diff_controller gdcm_jpeg8_jinit_d_diff_controller
#define jinit_d_main_controller gdcm_jpeg8_jinit_d_main_controller
#define jinit_d_post_controller gdcm_jpeg8_jinit_d_post_controller
#define jinit_d_scaler gdcm_jpeg8_jinit_d_scaler
#define jinit_differencer gdcm_jpeg8_jinit_differencer
#define jinit_downsampler gdcm_jpeg8_jinit_downsampler
#define jinit_forward_dct gdcm_jpeg8_jinit_forward_dct
#define jinit_input_controller gdcm_jpeg8_jinit_input_controller
#define jinit_inverse_dct gdcm_jpeg8_jinit_inverse_dct
#define jinit_lhuff_decoder gdcm_jpeg8_jinit_lhuff_decoder
#define jinit_lhuff_encoder gdcm_jpeg8_jinit_lhuff_encoder
#define jinit_lossless_c_codec gdcm_jpeg8_jinit_lossless_c_codec
#define jinit_lossless_d_codec gdcm_jpeg8_jinit_lossless_d_codec
#define jinit_lossy_c_codec gdcm_jpeg8_jinit_lossy_c_codec
#define jinit_lossy_d_codec gdcm_jpeg8_jinit_lossy_d_codec
#define jinit_marker_reader gdcm_jpeg8_jinit_marker_reader
#define jinit_marker_writer gdcm_jpeg8_jinit_marker_writer
#define jinit_master_decompress gdcm_jpeg8_jinit_master_decompress
#define jinit_memory_mgr gdcm_jpeg8_jinit_memory_mgr
#define jinit_merged_upsampler gdcm_jpeg8_jinit_merged_upsampler
#define jinit_phuff_decoder gdcm_jpeg8_jinit_phuff_decoder
#define jinit_phuff_encoder gdcm_jpeg8_jinit_phuff_encoder
#define jinit_shuff_decoder gdcm_jpeg8_jinit_shuff_decoder
#define jinit_shuff_encoder gdcm_jpeg8_jinit_shuff_encoder
#define jinit_undifferencer gdcm_jpeg8_jinit_undifferencer
#define jinit_upsampler gdcm_jpeg8_jinit_upsampler
#define jpeg_CreateCompress gdcm_jpeg8_jpeg_CreateCompress
#define jpeg_CreateDecompress gdcm_jpeg8_jpeg_CreateDecompress
#define jpeg_abort gdcm_jpeg8_jpeg_abort
#define jpeg_abort_compress gdcm_jpeg8_jpeg_abort_compress
#define jpeg_abort_decompress gdcm_jpeg8_jpeg_abort_decompress
#define jpeg_add_quant_table gdcm_jpeg8_jpeg_add_quant_table
#define jpeg_alloc_huff_table gdcm_jpeg8_jpeg_alloc_huff_table
#define jpeg_alloc_quant_table gdcm_jpeg8_jpeg_alloc_quant_table
#define jpeg_calc_output_dimensions gdcm_jpeg8_jpeg_calc_output_dimensions
#define jpeg_consume_input gdcm_jpeg8_jpeg_consume_input
#define jpeg_copy_critical_parameters gdcm_jpeg8_jpeg_copy_critical_parameters
#define jpeg_default_colorspace gdcm_jpeg8_jpeg_default_colorspace
#define jpeg_destroy gdcm_jpeg8_jpeg_destroy
#define jpeg_destroy_compress gdcm_jpeg8_jpeg_destroy_compress
#define jpeg_destroy_decompress gdcm_jpeg8_jpeg_destroy_decompress
#define jpeg_fdct_float gdcm_jpeg8_jpeg_fdct_float
#define jpeg_fdct_ifast gdcm_jpeg8_jpeg_fdct_ifast
#define jpeg_fdct_islow gdcm_jpeg8_jpeg_fdct_islow
#define jpeg_fill_bit_buffer gdcm_jpeg8_jpeg_fill_bit_buffer
#define jpeg_finish_compress gdcm_jpeg8_jpeg_finish_compress
#define jpeg_finish_decompress gdcm_jpeg8_jpeg_finish_decompress
#define jpeg_finish_output gdcm_jpeg8_jpeg_finish_output
#define jpeg_free_large gdcm_jpeg8_jpeg_free_large
#define jpeg_free_small gdcm_jpeg8_jpeg_free_small
#define jpeg_gen_optimal_table gdcm_jpeg8_jpeg_gen_optimal_table
#define jpeg_get_large gdcm_jpeg8_jpeg_get_large
#define jpeg_get_small gdcm_jpeg8_jpeg_get_small
#define jpeg_has_multiple_scans gdcm_jpeg8_jpeg_has_multiple_scans
#define jpeg_huff_decode gdcm_jpeg8_jpeg_huff_decode
#define jpeg_idct_1x1 gdcm_jpeg8_jpeg_idct_1x1
#define jpeg_idct_2x2 gdcm_jpeg8_jpeg_idct_2x2
#define jpeg_idct_4x4 gdcm_jpeg8_jpeg_idct_4x4
#define jpeg_idct_float gdcm_jpeg8_jpeg_idct_float
#define jpeg_idct_ifast gdcm_jpeg8_jpeg_idct_ifast
#define jpeg_idct_islow gdcm_jpeg8_jpeg_idct_islow
#define jpeg_input_complete gdcm_jpeg8_jpeg_input_complete
#define jpeg_make_c_derived_tbl gdcm_jpeg8_jpeg_make_c_derived_tbl
#define jpeg_make_d_derived_tbl gdcm_jpeg8_jpeg_make_d_derived_tbl
#define jpeg_mem_available gdcm_jpeg8_jpeg_mem_available
#define jpeg_mem_init gdcm_jpeg8_jpeg_mem_init
#define jpeg_mem_term gdcm_jpeg8_jpeg_mem_term
#define jpeg_natural_order gdcm_jpeg8_jpeg_natural_order
#define jpeg_new_colormap gdcm_jpeg8_jpeg_new_colormap
#define jpeg_open_backing_store gdcm_jpeg8_jpeg_open_backing_store
#define jpeg_quality_scaling gdcm_jpeg8_jpeg_quality_scaling
#define jpeg_read_coefficients gdcm_jpeg8_jpeg_read_coefficients
#define jpeg_read_header gdcm_jpeg8_jpeg_read_header
#define jpeg_read_raw_data gdcm_jpeg8_jpeg_read_raw_data
#define jpeg_read_scanlines gdcm_jpeg8_jpeg_read_scanlines
#define jpeg_resync_to_restart gdcm_jpeg8_jpeg_resync_to_restart
#define jpeg_save_markers gdcm_jpeg8_jpeg_save_markers
#define jpeg_set_colorspace gdcm_jpeg8_jpeg_set_colorspace
#define jpeg_set_defaults gdcm_jpeg8_jpeg_set_defaults
#define jpeg_set_linear_quality gdcm_jpeg8_jpeg_set_linear_quality
#define jpeg_set_marker_processor gdcm_jpeg8_jpeg_set_marker_processor
#define jpeg_set_quality gdcm_jpeg8_jpeg_set_quality
#define jpeg_simple_lossless gdcm_jpeg8_jpeg_simple_lossless
#define jpeg_simple_progression gdcm_jpeg8_jpeg_simple_progression
#define jpeg_start_compress gdcm_jpeg8_jpeg_start_compress
#define jpeg_start_decompress gdcm_jpeg8_jpeg_start_decompress
#define jpeg_start_output gdcm_jpeg8_jpeg_start_output
#define jpeg_std_error gdcm_jpeg8_jpeg_std_error
#define jpeg_std_message_table gdcm_jpeg8_jpeg_std_message_table
#define jpeg_stdio_dest gdcm_jpeg8_jpeg_stdio_dest
#define jpeg_stdio_src gdcm_jpeg8_jpeg_stdio_src
#define jpeg_suppress_tables gdcm_jpeg8_jpeg_suppress_tables
#define jpeg_write_coefficients gdcm_jpeg8_jpeg_write_coefficients
#define jpeg_write_m_byte gdcm_jpeg8_jpeg_write_m_byte
#define jpeg_write_m_header gdcm_jpeg8_jpeg_write_m_header
#define jpeg_write_marker gdcm_jpeg8_jpeg_write_marker
#define jpeg_write_raw_data gdcm_jpeg8_jpeg_write_raw_data
#define jpeg_write_scanlines gdcm_jpeg8_jpeg_write_scanlines
#define jpeg_write_tables gdcm_jpeg8_jpeg_write_tables
#define jround_up gdcm_jpeg8_jround_up
#define jzero_far gdcm_jpeg8_jzero_far


#endif
