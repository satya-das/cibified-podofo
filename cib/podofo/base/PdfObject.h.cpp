#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfObject>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfObject> : public ::PoDoFo::PdfObject {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfObject>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfObject::PdfObject()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfReference& rRef, const char* pszType)
    : ::PoDoFo::PdfObject::PdfObject(    rRef,
    std::move(pszType))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfReference& rRef, const ::PoDoFo::PdfVariant& rVariant)
    : ::PoDoFo::PdfObject::PdfObject(    rRef,
    rVariant)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfVariant& var)
    : ::PoDoFo::PdfObject::PdfObject(    var)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, bool b)
    : ::PoDoFo::PdfObject::PdfObject(    std::move(b))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::pdf_int64 l)
    : ::PoDoFo::PdfObject::PdfObject(    std::move(l))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, double d)
    : ::PoDoFo::PdfObject::PdfObject(    std::move(d))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfString& rsString)
    : ::PoDoFo::PdfObject::PdfObject(    rsString)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfName& rName)
    : ::PoDoFo::PdfObject::PdfObject(    rName)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfReference& rRef)
    : ::PoDoFo::PdfObject::PdfObject(    rRef)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfArray& tList)
    : ::PoDoFo::PdfObject::PdfObject(    tList)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfDictionary& rDict)
    : ::PoDoFo::PdfObject::PdfObject(    rDict)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfObject& rhs)
    : ::PoDoFo::PdfObject::PdfObject(    rhs)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void AfterDelayedLoad(::PoDoFo::EPdfDataType eDataType) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(eDataType)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AfterDelayedLoad_0>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDataType)>(std::move(eDataType))
    );
  }
  void DelayedStreamLoadImpl() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::DelayedStreamLoadImpl_1>(
      __zz_cib_h_
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt, const ::PoDoFo::PdfName& keyStop) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(eWriteMode)>, __zz_cib_AbiType_t<decltype(pEncrypt)>, __zz_cib_AbiType_t<decltype(keyStop)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keyStop)>(keyStop)
    );
  }
  void DelayedLoadImpl() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::DelayedLoadImpl_3>(
      __zz_cib_h_
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_4>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfObject)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class384::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfObject> : public ::PoDoFo::PdfObject {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfObject::PdfObject;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef, __zz_cib_AbiType_t<const char*> pszType) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszType));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef, __zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&> rVariant) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVariant&>(rVariant));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&> var) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVariant&>(var));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_4(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<bool> b) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<bool>(b));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_5(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> l) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(l));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_6(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<double> d) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<double>(d));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_7(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_8(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_9(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_10(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> tList) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(tList));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_11(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> rDict) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(rDict));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_12(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfObject>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_13(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetIndirectKey_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetIndirectKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl MustGetIndirectKey_15(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfObject::MustGetIndirectKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int64> __zz_cib_decl GetIndirectKeyAsLong_16(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> lDefault) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int64>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetIndirectKeyAsLong(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(lDefault)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetIndirectKeyAsReal_17(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key, __zz_cib_AbiType_t<double> dDefault) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetIndirectKeyAsReal(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key),
        __zz_cib_::__zz_cib_FromAbiType<double>(dDefault)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetIndirectKeyAsBool_18(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key, __zz_cib_AbiType_t<bool> bDefault) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetIndirectKeyAsBool(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bDefault)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfName> __zz_cib_decl GetIndirectKeyAsName_19(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfName>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetIndirectKeyAsName(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteObject_20(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> keyStop) {
    __zz_cib_obj->::PoDoFo::PdfObject::WriteObject(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(keyStop)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetObjectLength_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetObjectLength(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> __zz_cib_decl Reference_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfReference&>(
      __zz_cib_obj->::PoDoFo::PdfObject::Reference()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfStream*> __zz_cib_decl GetStream_23(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetStream()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfStream*> __zz_cib_decl GetStream_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfStream*>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetStream()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasStream_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfObject::HasStream()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_26(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfObject::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_27(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfObject::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> __zz_cib_decl GetOwner_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfVecObjects*>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetOwner()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> __zz_cib_decl __zz_cib_OperatorEqual_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject&>(
      __zz_cib_obj->::PoDoFo::PdfObject::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FlateCompressStream_30(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfObject::FlateCompressStream();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetByteOffset_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszKey, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetByteOffset(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszKey),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedStreamLoad_32(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfObject::DelayedStreamLoad();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EnableDelayedStreamLoading_33(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfObject::EnableDelayedStreamLoading();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedStreamLoadImpl_34(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfObject::DelayedStreamLoadImpl();
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfStream*> __zz_cib_decl GetStream_NoDL_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_obj->::PoDoFo::PdfObject::GetStream_NoDL()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AfterDelayedLoad_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfDataType> eDataType) {
    __zz_cib_obj->::PoDoFo::PdfObject::AfterDelayedLoad(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(eDataType)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetVariantOwner_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfDataType> eDataType) {
    __zz_cib_obj->::PoDoFo::PdfObject::SetVariantOwner(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(eDataType)
    );
  }
#if  defined(PODOFO_EXTRA_CHECKS)
  static __zz_cib_AbiType_t<PODOFO_NOTHROW> __zz_cib_decl DelayedStreamLoadInProgress_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<PODOFO_NOTHROW>(
      __zz_cib_obj->::PoDoFo::PdfObject::DelayedStreamLoadInProgress()
    );
  }
#endif
  static __zz_cib_AbiType_t<bool> __zz_cib_decl DelayedStreamLoadDone_39(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfObject::DelayedStreamLoadDone()
    );
  }
  static ::PoDoFo::PdfVariant* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class403(::PoDoFo::PdfObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfObject* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class403(::PoDoFo::PdfVariant* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfObject*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class384 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_new_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_copy_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_delete_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetIndirectKey_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::MustGetIndirectKey_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetIndirectKeyAsLong_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetIndirectKeyAsReal_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetIndirectKeyAsBool_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetIndirectKeyAsName_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::WriteObject_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetObjectLength_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::Reference_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetStream_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetStream_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::HasStream_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_OperatorLT_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_OperatorCmpEq_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetOwner_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_OperatorEqual_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::FlateCompressStream_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetByteOffset_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::DelayedStreamLoad_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::EnableDelayedStreamLoading_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::DelayedStreamLoadImpl_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::GetStream_NoDL_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::AfterDelayedLoad_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::SetVariantOwner_37),
#if  defined(PODOFO_EXTRA_CHECKS)
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::DelayedStreamLoadInProgress_38),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::DelayedStreamLoadDone_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_cast_to___zz_cib_Class403),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_cast_from___zz_cib_Class403),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObject>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 43 };
  return &methodTable;
}
}}}
