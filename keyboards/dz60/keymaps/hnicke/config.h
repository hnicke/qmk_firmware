// per key debounce to counter my defect switches
// see https://docs.qmk.fm/#/feature_debounce_type
#undef DEBOUNCE
#define DEBOUNCE 20
#define DEBOUNCE_TYPE sym_eager_pk
