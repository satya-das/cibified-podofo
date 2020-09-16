#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfTokenizer.h"
#include "podofo/base/PdfVariant.h"
#include <vector>

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfTokenizer>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfTokenizer> : public ::PoDoFo::PdfTokenizer {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfTokenizer>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfTokenizer::PdfTokenizer()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const char* pBuffer, size_t lLen)
    : ::PoDoFo::PdfTokenizer::PdfTokenizer(    std::move(pBuffer),
    std::move(lLen))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfRefCountedInputDevice& rDevice, const ::PoDoFo::PdfRefCountedBuffer& rBuffer)
    : ::PoDoFo::PdfTokenizer::PdfTokenizer(    rDevice,
    rBuffer)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  bool GetNextToken(const char*& pszToken, ::PoDoFo::EPdfTokenType* peType) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszToken)>, __zz_cib_AbiType_t<decltype(peType)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetNextToken_0>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(pszToken),
        __zz_cib_::__zz_cib_ToAbiType<decltype(peType)>(std::move(peType))
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfTokenizer)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class402::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfTokenizer> : public ::PoDoFo::PdfTokenizer {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTokenizer>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfTokenizer::PdfTokenizer;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTokenizer>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTokenizer>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> rDevice, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTokenizer>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(rDevice),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer));
  }
  static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetNextToken_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*&> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType*> peType) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTokenizer::GetNextToken(
        __zz_cib_::__zz_cib_FromAbiType<const char*&>(pszToken),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType*>(peType)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsNextToken_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszToken) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTokenizer::IsNextToken(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszToken)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetNextNumber_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfTokenizer::GetNextNumber()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetNextVariant_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::GetNextVariant(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsWhitespace_8(__zz_cib_AbiType_t<const unsigned char> ch) {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfTokenizer::IsWhitespace(
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char>(ch)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDelimiter_9(__zz_cib_AbiType_t<const unsigned char> ch) {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfTokenizer::IsDelimiter(
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char>(ch)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsRegular_10(__zz_cib_AbiType_t<const unsigned char> ch) {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfTokenizer::IsRegular(
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char>(ch)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPrintable_11(__zz_cib_AbiType_t<const unsigned char> ch) {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfTokenizer::IsPrintable(
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char>(ch)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetHexValue_12(__zz_cib_AbiType_t<const unsigned char> ch) {
    return __zz_cib_ToAbiType<int>(
      ::PoDoFo::PdfTokenizer::GetHexValue(
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char>(ch)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetNextVariant_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType> eType, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::GetNextVariant(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszToken),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType>(eType),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfDataType> __zz_cib_decl DetermineDataType_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType> eType, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfDataType>(
      __zz_cib_obj->::PoDoFo::PdfTokenizer::DetermineDataType(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszToken),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType>(eType),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadDataType_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfDataType> eDataType, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::ReadDataType(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(eDataType),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadDictionary_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::ReadDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadArray_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::ReadArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadString_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::ReadString(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadHexString_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::ReadHexString(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadHexString_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>&> rVecBuffer) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::ReadHexString(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>&>(rVecBuffer)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadName_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::ReadName(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl QuequeToken_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType> eType) {
    __zz_cib_obj->::PoDoFo::PdfTokenizer::QuequeToken(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszToken),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType>(eType)
    );
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class402 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::__zz_cib_delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::GetNextToken_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::IsNextToken_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::GetNextNumber_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::GetNextVariant_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::IsWhitespace_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::IsDelimiter_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::IsRegular_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::IsPrintable_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::GetHexValue_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::GetNextVariant_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::DetermineDataType_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::ReadDataType_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::ReadDictionary_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::ReadArray_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::ReadString_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::ReadHexString_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::ReadHexString_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::ReadName_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::QuequeToken_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTokenizer>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 24 };
  return &methodTable;
}
}}}
