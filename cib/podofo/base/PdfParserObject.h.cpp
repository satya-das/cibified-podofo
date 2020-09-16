#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfParserObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfVecObjects.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfParserObject>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfParserObject> : public ::PoDoFo::PdfParserObject {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfParserObject>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfVecObjects* pCreator, const ::PoDoFo::PdfRefCountedInputDevice& rDevice, const ::PoDoFo::PdfRefCountedBuffer& rBuffer, ::PoDoFo::pdf_long lOffset)
    : ::PoDoFo::PdfParserObject::PdfParserObject(    std::move(pCreator),
    rDevice,
    rBuffer,
    std::move(lOffset))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfRefCountedBuffer& rBuffer)
    : ::PoDoFo::PdfParserObject::PdfParserObject(    rBuffer)
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
  void AfterDelayedLoad(::PoDoFo::EPdfDataType eDataType) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(eDataType)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AfterDelayedLoad_1>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDataType)>(std::move(eDataType))
    );
  }
  void DelayedStreamLoadImpl() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::DelayedStreamLoadImpl_2>(
      __zz_cib_h_
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt, const ::PoDoFo::PdfName& keyStop) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(eWriteMode)>, __zz_cib_AbiType_t<decltype(pEncrypt)>, __zz_cib_AbiType_t<decltype(keyStop)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_3>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keyStop)>(keyStop)
    );
  }
  void DelayedLoadImpl() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::DelayedLoadImpl_4>(
      __zz_cib_h_
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_5>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfParserObject)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class395::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfParserObject> : public ::PoDoFo::PdfParserObject {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfParserObject>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfParserObject::PdfParserObject;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pCreator, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> rDevice, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lOffset) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfParserObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pCreator),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(rDevice),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lOffset));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfParserObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer));
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseFile_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<bool> bIsTrailer) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::ParseFile(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bIsTrailer)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasStreamToParse_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParserObject::HasStreamToParse()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLoadOnDemand_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParserObject::IsLoadOnDemand()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetLoadOnDemand_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDelayed) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::SetLoadOnDemand(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDelayed)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetObjectNumber_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned int> nObjNo) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::SetObjectNumber(
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nObjNo)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FreeObjectMemory_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bForce) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::FreeObjectMemory(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bForce)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int64> __zz_cib_decl GetOffset_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int64>(
      __zz_cib_obj->::PoDoFo::PdfParserObject::GetOffset()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedLoadImpl_10(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::DelayedLoadImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedStreamLoadImpl_11(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::DelayedStreamLoadImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseStream_12(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::ParseStream();
  }
  static ::PoDoFo::PdfVariant* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class403(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfParserObject* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class403(::PoDoFo::PdfVariant* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfParserObject*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfObject* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class384(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfParserObject* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class384(::PoDoFo::PdfObject* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfParserObject*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfTokenizer* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class402(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfParserObject* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class402(::PoDoFo::PdfTokenizer* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfParserObject*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class395 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::ParseFile_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::HasStreamToParse_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::IsLoadOnDemand_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::SetLoadOnDemand_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::SetObjectNumber_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::FreeObjectMemory_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::GetOffset_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::DelayedLoadImpl_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::DelayedStreamLoadImpl_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::ParseStream_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_cast_to___zz_cib_Class403),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_cast_from___zz_cib_Class403),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_cast_to___zz_cib_Class384),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_cast_from___zz_cib_Class384),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_cast_to___zz_cib_Class402),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_cast_from___zz_cib_Class402),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 20 };
  return &methodTable;
}
}}}
