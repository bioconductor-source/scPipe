// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_sc_trim_barcode_paired
void rcpp_sc_trim_barcode_paired(Rcpp::CharacterVector outfq, Rcpp::CharacterVector r1, Rcpp::CharacterVector r2, Rcpp::NumericVector bs1, Rcpp::NumericVector bl1, Rcpp::NumericVector bs2, Rcpp::NumericVector bl2, Rcpp::NumericVector us, Rcpp::NumericVector ul, Rcpp::NumericVector rmlow, Rcpp::NumericVector rmN, Rcpp::NumericVector minq, Rcpp::NumericVector numbq, Rcpp::LogicalVector write_gz);
RcppExport SEXP _scPipe_rcpp_sc_trim_barcode_paired(SEXP outfqSEXP, SEXP r1SEXP, SEXP r2SEXP, SEXP bs1SEXP, SEXP bl1SEXP, SEXP bs2SEXP, SEXP bl2SEXP, SEXP usSEXP, SEXP ulSEXP, SEXP rmlowSEXP, SEXP rmNSEXP, SEXP minqSEXP, SEXP numbqSEXP, SEXP write_gzSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outfq(outfqSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bs1(bs1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bl1(bl1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bs2(bs2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bl2(bl2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type us(usSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ul(ulSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rmlow(rmlowSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rmN(rmNSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minq(minqSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type numbq(numbqSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type write_gz(write_gzSEXP);
    rcpp_sc_trim_barcode_paired(outfq, r1, r2, bs1, bl1, bs2, bl2, us, ul, rmlow, rmN, minq, numbq, write_gz);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_exon_mapping
void rcpp_sc_exon_mapping(Rcpp::CharacterVector inbam, Rcpp::CharacterVector outbam, Rcpp::CharacterVector annofn, Rcpp::CharacterVector am, Rcpp::CharacterVector ge, Rcpp::CharacterVector bc, Rcpp::CharacterVector mb, Rcpp::NumericVector bc_len, Rcpp::CharacterVector bc_vector, Rcpp::NumericVector UMI_len, Rcpp::NumericVector stnd, Rcpp::NumericVector fix_chr, Rcpp::NumericVector nthreads);
RcppExport SEXP _scPipe_rcpp_sc_exon_mapping(SEXP inbamSEXP, SEXP outbamSEXP, SEXP annofnSEXP, SEXP amSEXP, SEXP geSEXP, SEXP bcSEXP, SEXP mbSEXP, SEXP bc_lenSEXP, SEXP bc_vectorSEXP, SEXP UMI_lenSEXP, SEXP stndSEXP, SEXP fix_chrSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inbam(inbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outbam(outbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type annofn(annofnSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type am(amSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ge(geSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mb(mbSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bc_len(bc_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc_vector(bc_vectorSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type UMI_len(UMI_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stnd(stndSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type fix_chr(fix_chrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nthreads(nthreadsSEXP);
    rcpp_sc_exon_mapping(inbam, outbam, annofn, am, ge, bc, mb, bc_len, bc_vector, UMI_len, stnd, fix_chr, nthreads);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_exon_mapping_df_anno
void rcpp_sc_exon_mapping_df_anno(Rcpp::CharacterVector inbam, Rcpp::CharacterVector outbam, Rcpp::DataFrame anno, Rcpp::CharacterVector am, Rcpp::CharacterVector ge, Rcpp::CharacterVector bc, Rcpp::CharacterVector mb, Rcpp::NumericVector bc_len, Rcpp::CharacterVector bc_vector, Rcpp::NumericVector UMI_len, Rcpp::NumericVector stnd, Rcpp::NumericVector fix_chr, Rcpp::NumericVector nthreads);
RcppExport SEXP _scPipe_rcpp_sc_exon_mapping_df_anno(SEXP inbamSEXP, SEXP outbamSEXP, SEXP annoSEXP, SEXP amSEXP, SEXP geSEXP, SEXP bcSEXP, SEXP mbSEXP, SEXP bc_lenSEXP, SEXP bc_vectorSEXP, SEXP UMI_lenSEXP, SEXP stndSEXP, SEXP fix_chrSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inbam(inbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outbam(outbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type anno(annoSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type am(amSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ge(geSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mb(mbSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bc_len(bc_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc_vector(bc_vectorSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type UMI_len(UMI_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stnd(stndSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type fix_chr(fix_chrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nthreads(nthreadsSEXP);
    rcpp_sc_exon_mapping_df_anno(inbam, outbam, anno, am, ge, bc, mb, bc_len, bc_vector, UMI_len, stnd, fix_chr, nthreads);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_demultiplex
void rcpp_sc_demultiplex(Rcpp::CharacterVector inbam, Rcpp::CharacterVector outdir, Rcpp::CharacterVector bc_anno, Rcpp::NumericVector max_mis, Rcpp::CharacterVector am, Rcpp::CharacterVector ge, Rcpp::CharacterVector bc, Rcpp::CharacterVector mb, Rcpp::CharacterVector mito, Rcpp::LogicalVector has_UMI, Rcpp::NumericVector nthreads);
RcppExport SEXP _scPipe_rcpp_sc_demultiplex(SEXP inbamSEXP, SEXP outdirSEXP, SEXP bc_annoSEXP, SEXP max_misSEXP, SEXP amSEXP, SEXP geSEXP, SEXP bcSEXP, SEXP mbSEXP, SEXP mitoSEXP, SEXP has_UMISEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inbam(inbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outdir(outdirSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc_anno(bc_annoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_mis(max_misSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type am(amSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ge(geSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mb(mbSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mito(mitoSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type has_UMI(has_UMISEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nthreads(nthreadsSEXP);
    rcpp_sc_demultiplex(inbam, outdir, bc_anno, max_mis, am, ge, bc, mb, mito, has_UMI, nthreads);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_clean_bam
void rcpp_sc_clean_bam(Rcpp::CharacterVector inbam, Rcpp::CharacterVector outbam, Rcpp::CharacterVector bc_anno, Rcpp::NumericVector max_mis, Rcpp::CharacterVector am, Rcpp::CharacterVector ge, Rcpp::CharacterVector bc, Rcpp::CharacterVector mb, Rcpp::CharacterVector mito, Rcpp::NumericVector nthreads);
RcppExport SEXP _scPipe_rcpp_sc_clean_bam(SEXP inbamSEXP, SEXP outbamSEXP, SEXP bc_annoSEXP, SEXP max_misSEXP, SEXP amSEXP, SEXP geSEXP, SEXP bcSEXP, SEXP mbSEXP, SEXP mitoSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inbam(inbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outbam(outbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc_anno(bc_annoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_mis(max_misSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type am(amSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ge(geSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mb(mbSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mito(mitoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nthreads(nthreadsSEXP);
    rcpp_sc_clean_bam(inbam, outbam, bc_anno, max_mis, am, ge, bc, mb, mito, nthreads);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_gene_counting
void rcpp_sc_gene_counting(Rcpp::CharacterVector outdir, Rcpp::CharacterVector bc_anno, Rcpp::NumericVector UMI_cor, Rcpp::NumericVector gene_fl);
RcppExport SEXP _scPipe_rcpp_sc_gene_counting(SEXP outdirSEXP, SEXP bc_annoSEXP, SEXP UMI_corSEXP, SEXP gene_flSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outdir(outdirSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc_anno(bc_annoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type UMI_cor(UMI_corSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gene_fl(gene_flSEXP);
    rcpp_sc_gene_counting(outdir, bc_anno, UMI_cor, gene_fl);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_detect_bc
void rcpp_sc_detect_bc(Rcpp::CharacterVector infq, Rcpp::CharacterVector outcsv, Rcpp::CharacterVector prefix, Rcpp::NumericVector bc_len, Rcpp::NumericVector max_reads, Rcpp::NumericVector number_of_cells, Rcpp::NumericVector min_count, Rcpp::NumericVector max_mismatch, Rcpp::CharacterVector white_list);
RcppExport SEXP _scPipe_rcpp_sc_detect_bc(SEXP infqSEXP, SEXP outcsvSEXP, SEXP prefixSEXP, SEXP bc_lenSEXP, SEXP max_readsSEXP, SEXP number_of_cellsSEXP, SEXP min_countSEXP, SEXP max_mismatchSEXP, SEXP white_listSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type infq(infqSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outcsv(outcsvSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type prefix(prefixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bc_len(bc_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_reads(max_readsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type number_of_cells(number_of_cellsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type min_count(min_countSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_mismatch(max_mismatchSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type white_list(white_listSEXP);
    rcpp_sc_detect_bc(infq, outcsv, prefix, bc_len, max_reads, number_of_cells, min_count, max_mismatch, white_list);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_atac_trim_barcode
std::vector<int> rcpp_sc_atac_trim_barcode(Rcpp::CharacterVector outfq, Rcpp::CharacterVector r1, Rcpp::CharacterVector r3, Rcpp::StringVector barcode_file, Rcpp::NumericVector start, Rcpp::NumericVector len, Rcpp::NumericVector umi_start, Rcpp::NumericVector umi_len, Rcpp::CharacterVector umi_in, Rcpp::LogicalVector write_gz, Rcpp::LogicalVector rmN, Rcpp::LogicalVector rmlow, Rcpp::IntegerVector min_qual, Rcpp::IntegerVector num_below_min, Rcpp::IntegerVector id1_st, Rcpp::IntegerVector id1_len, Rcpp::IntegerVector id2_st, Rcpp::IntegerVector id2_len);
RcppExport SEXP _scPipe_rcpp_sc_atac_trim_barcode(SEXP outfqSEXP, SEXP r1SEXP, SEXP r3SEXP, SEXP barcode_fileSEXP, SEXP startSEXP, SEXP lenSEXP, SEXP umi_startSEXP, SEXP umi_lenSEXP, SEXP umi_inSEXP, SEXP write_gzSEXP, SEXP rmNSEXP, SEXP rmlowSEXP, SEXP min_qualSEXP, SEXP num_below_minSEXP, SEXP id1_stSEXP, SEXP id1_lenSEXP, SEXP id2_stSEXP, SEXP id2_lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outfq(outfqSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r3(r3SEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type barcode_file(barcode_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type len(lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type umi_start(umi_startSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type umi_len(umi_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type umi_in(umi_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type write_gz(write_gzSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type rmN(rmNSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type rmlow(rmlowSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type min_qual(min_qualSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type num_below_min(num_below_minSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id1_st(id1_stSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id1_len(id1_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id2_st(id2_stSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id2_len(id2_lenSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sc_atac_trim_barcode(outfq, r1, r3, barcode_file, start, len, umi_start, umi_len, umi_in, write_gz, rmN, rmlow, min_qual, num_below_min, id1_st, id1_len, id2_st, id2_len));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sc_atac_trim_barcode_paired
std::vector<int> rcpp_sc_atac_trim_barcode_paired(Rcpp::CharacterVector outfq, Rcpp::CharacterVector r1, Rcpp::StringVector r2_list, Rcpp::CharacterVector r3, Rcpp::LogicalVector write_gz, Rcpp::LogicalVector rmN, Rcpp::LogicalVector rmlow, Rcpp::IntegerVector min_qual, Rcpp::IntegerVector num_below_min, Rcpp::IntegerVector id1_st, Rcpp::IntegerVector id1_len, Rcpp::IntegerVector id2_st, Rcpp::IntegerVector id2_len, Rcpp::NumericVector umi_start, Rcpp::NumericVector umi_len);
RcppExport SEXP _scPipe_rcpp_sc_atac_trim_barcode_paired(SEXP outfqSEXP, SEXP r1SEXP, SEXP r2_listSEXP, SEXP r3SEXP, SEXP write_gzSEXP, SEXP rmNSEXP, SEXP rmlowSEXP, SEXP min_qualSEXP, SEXP num_below_minSEXP, SEXP id1_stSEXP, SEXP id1_lenSEXP, SEXP id2_stSEXP, SEXP id2_lenSEXP, SEXP umi_startSEXP, SEXP umi_lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outfq(outfqSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type r2_list(r2_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r3(r3SEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type write_gz(write_gzSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type rmN(rmNSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type rmlow(rmlowSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type min_qual(min_qualSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type num_below_min(num_below_minSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id1_st(id1_stSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id1_len(id1_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id2_st(id2_stSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id2_len(id2_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type umi_start(umi_startSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type umi_len(umi_lenSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sc_atac_trim_barcode_paired(outfq, r1, r2_list, r3, write_gz, rmN, rmlow, min_qual, num_below_min, id1_st, id1_len, id2_st, id2_len, umi_start, umi_len));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sc_atac_bam_tagging
void rcpp_sc_atac_bam_tagging(Rcpp::CharacterVector inbam, Rcpp::CharacterVector outbam, Rcpp::CharacterVector bc, Rcpp::CharacterVector mb, Rcpp::NumericVector nthreads);
RcppExport SEXP _scPipe_rcpp_sc_atac_bam_tagging(SEXP inbamSEXP, SEXP outbamSEXP, SEXP bcSEXP, SEXP mbSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inbam(inbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outbam(outbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mb(mbSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nthreads(nthreadsSEXP);
    rcpp_sc_atac_bam_tagging(inbam, outbam, bc, mb, nthreads);
    return R_NilValue;
END_RCPP
}
// rcpp_fasta_bin_bed_file
void rcpp_fasta_bin_bed_file(std::string in_filename, std::string out_filename, int bin_size);
RcppExport SEXP _scPipe_rcpp_fasta_bin_bed_file(SEXP in_filenameSEXP, SEXP out_filenameSEXP, SEXP bin_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type in_filename(in_filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type out_filename(out_filenameSEXP);
    Rcpp::traits::input_parameter< int >::type bin_size(bin_sizeSEXP);
    rcpp_fasta_bin_bed_file(in_filename, out_filename, bin_size);
    return R_NilValue;
END_RCPP
}
// rcpp_append_chr_to_bed_file
void rcpp_append_chr_to_bed_file(std::string in_filename, std::string out_filename);
RcppExport SEXP _scPipe_rcpp_append_chr_to_bed_file(SEXP in_filenameSEXP, SEXP out_filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type in_filename(in_filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type out_filename(out_filenameSEXP);
    rcpp_append_chr_to_bed_file(in_filename, out_filename);
    return R_NilValue;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_scPipe_rcpp_sc_trim_barcode_paired", (DL_FUNC) &_scPipe_rcpp_sc_trim_barcode_paired, 14},
    {"_scPipe_rcpp_sc_exon_mapping", (DL_FUNC) &_scPipe_rcpp_sc_exon_mapping, 13},
    {"_scPipe_rcpp_sc_exon_mapping_df_anno", (DL_FUNC) &_scPipe_rcpp_sc_exon_mapping_df_anno, 13},
    {"_scPipe_rcpp_sc_demultiplex", (DL_FUNC) &_scPipe_rcpp_sc_demultiplex, 11},
    {"_scPipe_rcpp_sc_clean_bam", (DL_FUNC) &_scPipe_rcpp_sc_clean_bam, 10},
    {"_scPipe_rcpp_sc_gene_counting", (DL_FUNC) &_scPipe_rcpp_sc_gene_counting, 4},
    {"_scPipe_rcpp_sc_detect_bc", (DL_FUNC) &_scPipe_rcpp_sc_detect_bc, 9},
    {"_scPipe_rcpp_sc_atac_trim_barcode", (DL_FUNC) &_scPipe_rcpp_sc_atac_trim_barcode, 18},
    {"_scPipe_rcpp_sc_atac_trim_barcode_paired", (DL_FUNC) &_scPipe_rcpp_sc_atac_trim_barcode_paired, 15},
    {"_scPipe_rcpp_sc_atac_bam_tagging", (DL_FUNC) &_scPipe_rcpp_sc_atac_bam_tagging, 5},
    {"_scPipe_rcpp_fasta_bin_bed_file", (DL_FUNC) &_scPipe_rcpp_fasta_bin_bed_file, 3},
    {"_scPipe_rcpp_append_chr_to_bed_file", (DL_FUNC) &_scPipe_rcpp_append_chr_to_bed_file, 2},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_scPipe(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
