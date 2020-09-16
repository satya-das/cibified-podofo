#include "podofo/base/PdfMemoryManagement.h"

namespace PoDoFo {

void* PoDoFo::podofo_malloc(size_t size) {
  return __zz_cib_::__zz_cib_FromAbiType<void*>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_malloc_1<__zz_cib_::__zz_cib_AbiType_t<void*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    )
  );
}

void* PoDoFo::podofo_calloc(size_t count, size_t size) {
  return __zz_cib_::__zz_cib_FromAbiType<void*>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_calloc_2<__zz_cib_::__zz_cib_AbiType_t<void*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(count)>(std::move(count)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    )
  );
}

void* PoDoFo::podofo_realloc(void* buffer, size_t size) {
  return __zz_cib_::__zz_cib_FromAbiType<void*>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_realloc_3<__zz_cib_::__zz_cib_AbiType_t<void*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(buffer)>(std::move(buffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    )
  );
}

void PoDoFo::podofo_free(void* buffer) {
  __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_free_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(buffer)>(std::move(buffer))
  );
}

bool PoDoFo::podofo_is_little_endian() {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_is_little_endian_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(

    )
  );
}
}
