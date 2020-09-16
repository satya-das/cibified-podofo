#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfContentsTokenizer.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfTokenizer.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfDocument.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(__zz_cib_AbiType h)
  : ::PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class402(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(PdfContentsTokenizer&& rhs)
  : ::PoDoFo::PdfTokenizer(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(const char* pBuffer, long lLen)
  : PoDoFo::PdfContentsTokenizer(__zz_cib_MyHelper::__zz_cib_new_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
  {}

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(::PoDoFo::PdfCanvas* pCanvas)
  : PoDoFo::PdfContentsTokenizer(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pCanvas)>(std::move(pCanvas))))
  {}

PoDoFo::PdfContentsTokenizer::~PdfContentsTokenizer() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

bool PoDoFo::PdfContentsTokenizer::ReadNext(::PoDoFo::EPdfContentsType& reType, const char*& rpszKeyword, ::PoDoFo::PdfVariant& rVariant) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::ReadNext_3<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(reType)>(reType),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rpszKeyword)>(rpszKeyword),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant)
    )
  );
}

bool PoDoFo::PdfContentsTokenizer::GetNextToken(const char*& pszToken, ::PoDoFo::EPdfTokenType* peType) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetNextToken_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(pszToken),
      __zz_cib_::__zz_cib_ToAbiType<decltype(peType)>(std::move(peType))
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfContentsTokenizer;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetNextToken_0(::PoDoFo::PdfContentsTokenizer* __zz_cib_obj, __zz_cib_AbiType_t<const char*&> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType*> peType) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->GetNextToken(
        __zz_cib_::__zz_cib_FromAbiType<const char*&>(pszToken),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType*>(peType)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::PoDoFo::PdfContentsTokenizer* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfContentsTokenizer>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class344 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::GetNextToken_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfContentsTokenizer>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class344::__zz_cib_GetMethodTable();
}
}

