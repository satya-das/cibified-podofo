#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfInputStream.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfString.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfEncrypt>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfEncrypt> : public ::PoDoFo::PdfEncrypt {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfEncrypt>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfEncrypt::PdfEncrypt()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncrypt& rhs)
    : ::PoDoFo::PdfEncrypt::PdfEncrypt(    rhs)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  ::PoDoFo::pdf_long CalculateStreamLength(::PoDoFo::pdf_long length) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(length)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamLength_0>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
      )
    );
  }
  void Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Decrypt_1>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }
  void Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Encrypt_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }
  void GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(documentId)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GenerateEncryptionKey_3>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_4>(
      __zz_cib_h_
    );
  }
  ::PoDoFo::pdf_long CalculateStreamOffset() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamOffset_5>(
        __zz_cib_h_
      )
    );
  }
  bool Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(password)>, __zz_cib_AbiType_t<decltype(documentId)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Authenticate_6>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
        __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
      )
    );
  }
  void CreateEncryptionDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionDictionary_7>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  ::PoDoFo::PdfOutputStream* CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pOutputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionOutputStream_8>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
      )
    );
  }
  ::PoDoFo::PdfInputStream* CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pInputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionInputStream_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
      )
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfEncrypt)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncrypt> : public ::PoDoFo::PdfEncrypt {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncrypt>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfEncrypt::PdfEncrypt;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> __zz_cib_decl CreatePdfEncrypt_0(__zz_cib_AbiType_t<const std::string&> userPassword, __zz_cib_AbiType_t<const std::string&> ownerPassword, __zz_cib_AbiType_t<int> protection, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm> eAlgorithm, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfKeyLength> eKeyLength) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncrypt*>(
      ::PoDoFo::PdfEncrypt::CreatePdfEncrypt(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(userPassword),
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(ownerPassword),
        __zz_cib_::__zz_cib_FromAbiType<int>(protection),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>(eAlgorithm),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfKeyLength>(eKeyLength)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> __zz_cib_decl CreatePdfEncrypt_1(__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pObject) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncrypt*>(
      ::PoDoFo::PdfEncrypt::CreatePdfEncrypt(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pObject)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> __zz_cib_decl CreatePdfEncrypt_2(__zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt&> rhs) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncrypt*>(
      ::PoDoFo::PdfEncrypt::CreatePdfEncrypt(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetEnabledEncryptionAlgorithms_3() {
    return __zz_cib_ToAbiType<int>(
      ::PoDoFo::PdfEncrypt::GetEnabledEncryptionAlgorithms()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetEnabledEncryptionAlgorithms_4(__zz_cib_AbiType_t<int> nEncryptionAlgorithms) {
    ::PoDoFo::PdfEncrypt::SetEnabledEncryptionAlgorithms(
      __zz_cib_::__zz_cib_FromAbiType<int>(nEncryptionAlgorithms)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEncryptionEnabled_5(__zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm> eAlgorithm) {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfEncrypt::IsEncryptionEnabled(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>(eAlgorithm)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_6(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateEncryptionKey_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    __zz_cib_obj->GenerateEncryptionKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreateEncryptionDictionary_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->CreateEncryptionDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateEncryptionOutputStream_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_obj->CreateEncryptionOutputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> __zz_cib_decl CreateEncryptionInputStream_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pInputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_obj->CreateEncryptionInputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pInputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Authenticate_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->Authenticate(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm> __zz_cib_decl GetEncryptAlgorithm_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::GetEncryptAlgorithm()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPrintAllowed_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditAllowed_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsEditAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCopyAllowed_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsCopyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditNotesAllowed_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsEditNotesAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsFillAndSignAllowed_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsFillAndSignAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAccessibilityAllowed_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsAccessibilityAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDocAssemblyAllowed_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsDocAssemblyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHighPrintAllowed_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsHighPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<const unsigned char*> __zz_cib_decl GetUValue_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const unsigned char*>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::GetUValue()
    );
  }
  static __zz_cib_AbiType_t<const unsigned char*> __zz_cib_decl GetOValue_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const unsigned char*>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::GetOValue()
    );
  }
  static __zz_cib_AbiType_t<const unsigned char*> __zz_cib_decl GetEncryptionKey_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const unsigned char*>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::GetEncryptionKey()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int32> __zz_cib_decl GetPValue_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int32>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::GetPValue()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetRevision_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::GetRevision()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetKeyLength_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::GetKeyLength()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsMetadataEncrypted_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::IsMetadataEncrypted()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Encrypt_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> outLen) {
    __zz_cib_obj->Encrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Decrypt_29(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long&> outLen) {
    __zz_cib_obj->Decrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long&>(outLen)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamLength_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> length) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamLength(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(length)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamOffset_31(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamOffset()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCurrentReference_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef) {
    __zz_cib_obj->::PoDoFo::PdfEncrypt::SetCurrentReference(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef)
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_33(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncrypt>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_34(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncrypt>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl CheckKey_35(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char[32]> key1, __zz_cib_AbiType_t<unsigned char[32]> key2) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncrypt::CheckKey(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(key1),
        __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(key2)
      )
    );
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::PoDoFo::PdfEncrypt** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncryptAESV2))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncryptRC4))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncryptMD5Base))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncrypt))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfEncryptAESV2*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_classid;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfEncryptRC4*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_classid;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfEncryptMD5Base*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_classid;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class363 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreatePdfEncrypt_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreatePdfEncrypt_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreatePdfEncrypt_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetEnabledEncryptionAlgorithms_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::SetEnabledEncryptionAlgorithms_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsEncryptionEnabled_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::__zz_cib_delete_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GenerateEncryptionKey_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreateEncryptionDictionary_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreateEncryptionOutputStream_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreateEncryptionInputStream_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::Authenticate_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetEncryptAlgorithm_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsPrintAllowed_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsEditAllowed_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsCopyAllowed_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsEditNotesAllowed_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsFillAndSignAllowed_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsAccessibilityAllowed_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsDocAssemblyAllowed_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsHighPrintAllowed_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetUValue_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetOValue_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetEncryptionKey_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetPValue_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetRevision_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GetKeyLength_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::IsMetadataEncrypted_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::Encrypt_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::Decrypt_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CalculateStreamLength_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CalculateStreamOffset_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::SetCurrentReference_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::__zz_cib_new_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::__zz_cib_copy_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CheckKey_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 38 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncryptAESBase> : public ::PoDoFo::PdfEncryptAESBase {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESBase>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfEncryptAESBase::PdfEncryptAESBase;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BaseDecrypt_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> key, __zz_cib_AbiType_t<int> keylen, __zz_cib_AbiType_t<const unsigned char*> iv, __zz_cib_AbiType_t<const unsigned char*> textin, __zz_cib_AbiType_t<::PoDoFo::pdf_long> textlen, __zz_cib_AbiType_t<unsigned char*> textout, __zz_cib_AbiType_t<::PoDoFo::pdf_long&> textoutlen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptAESBase::BaseDecrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(key),
      __zz_cib_::__zz_cib_FromAbiType<int>(keylen),
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(iv),
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(textin),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(textlen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(textout),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long&>(textoutlen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BaseEncrypt_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> key, __zz_cib_AbiType_t<int> keylen, __zz_cib_AbiType_t<const unsigned char*> iv, __zz_cib_AbiType_t<const unsigned char*> textin, __zz_cib_AbiType_t<::PoDoFo::pdf_long> textlen, __zz_cib_AbiType_t<unsigned char*> textout, __zz_cib_AbiType_t<::PoDoFo::pdf_long> textoutlen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptAESBase::BaseEncrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(key),
      __zz_cib_::__zz_cib_FromAbiType<int>(keylen),
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(iv),
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(textin),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(textlen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(textout),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(textoutlen)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class364 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESBase>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESBase>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESBase>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESBase>::BaseDecrypt_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESBase>::BaseEncrypt_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncryptRC4Base> : public ::PoDoFo::PdfEncryptRC4Base {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4Base>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfEncryptRC4Base::PdfEncryptRC4Base;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl RC4_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> key, __zz_cib_AbiType_t<int> keylen, __zz_cib_AbiType_t<const unsigned char*> textin, __zz_cib_AbiType_t<::PoDoFo::pdf_long> textlen, __zz_cib_AbiType_t<unsigned char*> textout, __zz_cib_AbiType_t<::PoDoFo::pdf_long> textoutlen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptRC4Base::RC4(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(key),
      __zz_cib_::__zz_cib_FromAbiType<int>(keylen),
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(textin),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(textlen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(textout),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(textoutlen)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class365 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4Base>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4Base>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4Base>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4Base>::RC4_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfEncryptMD5Base> : public ::PoDoFo::PdfEncryptMD5Base {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfEncryptMD5Base>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfEncryptMD5Base::PdfEncryptMD5Base()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncrypt& rhs)
    : ::PoDoFo::PdfEncryptMD5Base::PdfEncryptMD5Base(    rhs)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void GenerateInitialVector(unsigned char iv[16]) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(iv)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GenerateInitialVector_0>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(iv)>(std::move(iv))
    );
  }
  ::PoDoFo::pdf_long CalculateStreamLength(::PoDoFo::pdf_long length) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(length)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamLength_1>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
      )
    );
  }
  void Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Decrypt_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }
  void CreateEncryptionDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionDictionary_3>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  void GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(documentId)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GenerateEncryptionKey_4>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }
  ::PoDoFo::pdf_long CalculateStreamOffset() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamOffset_5>(
        __zz_cib_h_
      )
    );
  }
  bool Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(password)>, __zz_cib_AbiType_t<decltype(documentId)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Authenticate_6>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
        __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
      )
    );
  }
  ::PoDoFo::PdfOutputStream* CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pOutputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionOutputStream_7>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
      )
    );
  }
  void CreateObjKey(unsigned char objkey[16], int* pnKeyLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(objkey)>, __zz_cib_AbiType_t<decltype(pnKeyLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateObjKey_8>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(objkey)>(std::move(objkey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pnKeyLen)>(std::move(pnKeyLen))
    );
  }
  ::PoDoFo::PdfInputStream* CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pInputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionInputStream_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
      )
    );
  }
  void Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Encrypt_10>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_11>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfEncryptMD5Base)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base> : public ::PoDoFo::PdfEncryptMD5Base {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptMD5Base>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfEncryptMD5Base::PdfEncryptMD5Base;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptMD5Base>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt&> rhs) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptMD5Base>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt&>(rhs));
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> __zz_cib_decl CreateEncryptionInputStream_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pInputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_obj->CreateEncryptionInputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pInputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateEncryptionOutputStream_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_obj->CreateEncryptionOutputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreateEncryptionDictionary_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->::PoDoFo::PdfEncryptMD5Base::CreateEncryptionDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Authenticate_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->Authenticate(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Encrypt_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> outLen) {
    __zz_cib_obj->Encrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateEncryptionKey_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    __zz_cib_obj->GenerateEncryptionKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetMD5String_9(__zz_cib_AbiType_t<const unsigned char*> pBuffer, __zz_cib_AbiType_t<int> nLength) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      ::PoDoFo::PdfEncryptMD5Base::GetMD5String(
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<int>(nLength)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamOffset_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamOffset()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamLength_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> length) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamLength(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(length)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetMD5Binary_12(__zz_cib_AbiType_t<const unsigned char*> data, __zz_cib_AbiType_t<int> length, __zz_cib_AbiType_t<unsigned char*> digest) {
    ::PoDoFo::PdfEncryptMD5Base::GetMD5Binary(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(data),
      __zz_cib_::__zz_cib_FromAbiType<int>(length),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(digest)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Authenticate_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> documentID, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<const std::string&> uValue, __zz_cib_AbiType_t<const std::string&> oValue, __zz_cib_AbiType_t<int> pValue, __zz_cib_AbiType_t<int> lengthValue, __zz_cib_AbiType_t<int> rValue) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncryptMD5Base::Authenticate(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(documentID),
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(uValue),
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(oValue),
        __zz_cib_::__zz_cib_FromAbiType<int>(pValue),
        __zz_cib_::__zz_cib_FromAbiType<int>(lengthValue),
        __zz_cib_::__zz_cib_FromAbiType<int>(rValue)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateInitialVector_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char[16]> iv) {
    __zz_cib_obj->::PoDoFo::PdfEncryptMD5Base::GenerateInitialVector(
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[16]>(iv)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ComputeOwnerKey_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char[32]> userPad, __zz_cib_AbiType_t<unsigned char[32]> ownerPad, __zz_cib_AbiType_t<int> keylength, __zz_cib_AbiType_t<int> revision, __zz_cib_AbiType_t<bool> authenticate, __zz_cib_AbiType_t<unsigned char[32]> ownerKey) {
    __zz_cib_obj->::PoDoFo::PdfEncryptMD5Base::ComputeOwnerKey(
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(userPad),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(ownerPad),
      __zz_cib_::__zz_cib_FromAbiType<int>(keylength),
      __zz_cib_::__zz_cib_FromAbiType<int>(revision),
      __zz_cib_::__zz_cib_FromAbiType<bool>(authenticate),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(ownerKey)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl PadPassword_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<unsigned char[32]> pswd) {
    __zz_cib_obj->::PoDoFo::PdfEncryptMD5Base::PadPassword(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(pswd)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ComputeEncryptionKey_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> documentID, __zz_cib_AbiType_t<unsigned char[32]> userPad, __zz_cib_AbiType_t<unsigned char[32]> ownerKey, __zz_cib_AbiType_t<int> pValue, __zz_cib_AbiType_t<int> keyLength, __zz_cib_AbiType_t<int> revision, __zz_cib_AbiType_t<unsigned char[32]> userKey, __zz_cib_AbiType_t<bool> bEncryptMetadata) {
    __zz_cib_obj->::PoDoFo::PdfEncryptMD5Base::ComputeEncryptionKey(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(documentID),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(userPad),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(ownerKey),
      __zz_cib_::__zz_cib_FromAbiType<int>(pValue),
      __zz_cib_::__zz_cib_FromAbiType<int>(keyLength),
      __zz_cib_::__zz_cib_FromAbiType<int>(revision),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[32]>(userKey),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEncryptMetadata)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreateObjKey_18(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char[16]> objkey, __zz_cib_AbiType_t<int*> pnKeyLen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptMD5Base::CreateObjKey(
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[16]>(objkey),
      __zz_cib_::__zz_cib_FromAbiType<int*>(pnKeyLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Decrypt_19(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long&> outLen) {
    __zz_cib_obj->Decrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long&>(outLen)
    );
  }
  static ::PoDoFo::PdfEncrypt* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class363(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptMD5Base* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class363(::PoDoFo::PdfEncrypt* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptMD5Base*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfEncryptRC4Base* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class365(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptMD5Base* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class365(::PoDoFo::PdfEncryptRC4Base* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptMD5Base*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::PoDoFo::PdfEncryptMD5Base** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncryptAESV2))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncryptRC4))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncryptMD5Base))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfEncryptAESV2*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_classid;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfEncryptRC4*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_classid;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class366 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateEncryptionInputStream_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateEncryptionOutputStream_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateEncryptionDictionary_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::Authenticate_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::Encrypt_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::GenerateEncryptionKey_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::GetMD5String_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CalculateStreamOffset_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CalculateStreamLength_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::GetMD5Binary_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::Authenticate_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::GenerateInitialVector_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::ComputeOwnerKey_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::PadPassword_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::ComputeEncryptionKey_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateObjKey_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::Decrypt_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_cast_to___zz_cib_Class363),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_cast_from___zz_cib_Class363),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_cast_to___zz_cib_Class365),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_cast_from___zz_cib_Class365),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 26 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfEncryptAESV2> : public ::PoDoFo::PdfEncryptAESV2 {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfEncryptAESV2>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfString oValue, ::PoDoFo::PdfString uValue, int pValue, bool bEncryptMetadata)
    : ::PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(    std::move(oValue),
    std::move(uValue),
    std::move(pValue),
    std::move(bEncryptMetadata))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncrypt& rhs)
    : ::PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(    rhs)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const std::string& userPassword, const std::string& ownerPassword, int protection)
    : ::PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(    userPassword,
    ownerPassword,
    std::move(protection))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncryptAESV2& __zz_cib_param0)
    : ::PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void GenerateInitialVector(unsigned char iv[16]) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(iv)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GenerateInitialVector_0>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(iv)>(std::move(iv))
    );
  }
  ::PoDoFo::pdf_long CalculateStreamLength(::PoDoFo::pdf_long length) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(length)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamLength_1>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
      )
    );
  }
  void Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Decrypt_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }
  void CreateEncryptionDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionDictionary_3>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  void GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(documentId)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GenerateEncryptionKey_4>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }
  ::PoDoFo::pdf_long CalculateStreamOffset() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamOffset_5>(
        __zz_cib_h_
      )
    );
  }
  bool Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(password)>, __zz_cib_AbiType_t<decltype(documentId)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Authenticate_6>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
        __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
      )
    );
  }
  ::PoDoFo::PdfOutputStream* CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pOutputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionOutputStream_7>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
      )
    );
  }
  void CreateObjKey(unsigned char objkey[16], int* pnKeyLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(objkey)>, __zz_cib_AbiType_t<decltype(pnKeyLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateObjKey_8>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(objkey)>(std::move(objkey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pnKeyLen)>(std::move(pnKeyLen))
    );
  }
  ::PoDoFo::PdfInputStream* CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pInputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionInputStream_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
      )
    );
  }
  void Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Encrypt_10>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_11>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfEncryptAESV2)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2> : public ::PoDoFo::PdfEncryptAESV2 {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptAESV2>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptAESV2>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfString> oValue, __zz_cib_AbiType_t<::PoDoFo::PdfString> uValue, __zz_cib_AbiType_t<int> pValue, __zz_cib_AbiType_t<bool> bEncryptMetadata) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptAESV2>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(oValue),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(uValue),
    __zz_cib_::__zz_cib_FromAbiType<int>(pValue),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bEncryptMetadata));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt&> rhs) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptAESV2>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt&>(rhs));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const std::string&> userPassword, __zz_cib_AbiType_t<const std::string&> ownerPassword, __zz_cib_AbiType_t<int> protection) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptAESV2>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const std::string&>(userPassword),
    __zz_cib_::__zz_cib_FromAbiType<const std::string&>(ownerPassword),
    __zz_cib_::__zz_cib_FromAbiType<int>(protection));
  }
  static void __zz_cib_decl __zz_cib_delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> __zz_cib_decl CreateEncryptionInputStream_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pInputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::CreateEncryptionInputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pInputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateEncryptionOutputStream_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::CreateEncryptionOutputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Authenticate_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::Authenticate(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Encrypt_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> outLen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::Encrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Decrypt_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long&> outLen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::Decrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long&>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateEncryptionKey_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::GenerateEncryptionKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamOffset_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::CalculateStreamOffset()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamLength_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> length) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfEncryptAESV2::CalculateStreamLength(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(length)
      )
    );
  }
  static ::PoDoFo::PdfEncrypt* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class363(::PoDoFo::PdfEncryptAESV2* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptAESV2* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class363(::PoDoFo::PdfEncrypt* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptAESV2*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfEncryptRC4Base* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class365(::PoDoFo::PdfEncryptAESV2* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptAESV2* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class365(::PoDoFo::PdfEncryptRC4Base* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptAESV2*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfEncryptMD5Base* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class366(::PoDoFo::PdfEncryptAESV2* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptAESV2* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class366(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptAESV2*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfEncryptAESBase* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class364(::PoDoFo::PdfEncryptAESV2* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptAESV2* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class364(::PoDoFo::PdfEncryptAESBase* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptAESV2*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class367 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::CreateEncryptionInputStream_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::CreateEncryptionOutputStream_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::Authenticate_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::Encrypt_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::Decrypt_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::GenerateEncryptionKey_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::CalculateStreamOffset_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::CalculateStreamLength_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_to___zz_cib_Class363),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_from___zz_cib_Class363),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_to___zz_cib_Class365),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_from___zz_cib_Class365),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_to___zz_cib_Class366),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_from___zz_cib_Class366),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_to___zz_cib_Class364),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_cast_from___zz_cib_Class364),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptAESV2>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfEncryptRC4> : public ::PoDoFo::PdfEncryptRC4 {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfEncryptRC4>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfString oValue, ::PoDoFo::PdfString uValue, int pValue, int rValue, ::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm eAlgorithm, long length, bool bEncryptMetadata)
    : ::PoDoFo::PdfEncryptRC4::PdfEncryptRC4(    std::move(oValue),
    std::move(uValue),
    std::move(pValue),
    std::move(rValue),
    std::move(eAlgorithm),
    std::move(length),
    std::move(bEncryptMetadata))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncrypt& rhs)
    : ::PoDoFo::PdfEncryptRC4::PdfEncryptRC4(    rhs)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const std::string& userPassword, const std::string& ownerPassword, int protection, ::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm eAlgorithm, ::PoDoFo::PdfEncrypt::EPdfKeyLength eKeyLength)
    : ::PoDoFo::PdfEncryptRC4::PdfEncryptRC4(    userPassword,
    ownerPassword,
    std::move(protection),
    std::move(eAlgorithm),
    std::move(eKeyLength))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfEncryptRC4& __zz_cib_param0)
    : ::PoDoFo::PdfEncryptRC4::PdfEncryptRC4(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void GenerateInitialVector(unsigned char iv[16]) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(iv)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GenerateInitialVector_0>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(iv)>(std::move(iv))
    );
  }
  ::PoDoFo::pdf_long CalculateStreamLength(::PoDoFo::pdf_long length) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(length)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamLength_1>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
      )
    );
  }
  void Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Decrypt_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }
  void CreateEncryptionDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionDictionary_3>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  void GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(documentId)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GenerateEncryptionKey_4>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }
  ::PoDoFo::pdf_long CalculateStreamOffset() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CalculateStreamOffset_5>(
        __zz_cib_h_
      )
    );
  }
  bool Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(password)>, __zz_cib_AbiType_t<decltype(documentId)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Authenticate_6>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
        __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
      )
    );
  }
  ::PoDoFo::PdfOutputStream* CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pOutputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionOutputStream_7>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
      )
    );
  }
  void CreateObjKey(unsigned char objkey[16], int* pnKeyLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(objkey)>, __zz_cib_AbiType_t<decltype(pnKeyLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateObjKey_8>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(objkey)>(std::move(objkey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pnKeyLen)>(std::move(pnKeyLen))
    );
  }
  ::PoDoFo::PdfInputStream* CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pInputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CreateEncryptionInputStream_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
      )
    );
  }
  void Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Encrypt_10>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_11>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfEncryptRC4)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncryptRC4> : public ::PoDoFo::PdfEncryptRC4 {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptRC4>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfEncryptRC4::PdfEncryptRC4;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptRC4>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfString> oValue, __zz_cib_AbiType_t<::PoDoFo::PdfString> uValue, __zz_cib_AbiType_t<int> pValue, __zz_cib_AbiType_t<int> rValue, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm> eAlgorithm, __zz_cib_AbiType_t<long> length, __zz_cib_AbiType_t<bool> bEncryptMetadata) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptRC4>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(oValue),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(uValue),
    __zz_cib_::__zz_cib_FromAbiType<int>(pValue),
    __zz_cib_::__zz_cib_FromAbiType<int>(rValue),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>(eAlgorithm),
    __zz_cib_::__zz_cib_FromAbiType<long>(length),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bEncryptMetadata));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt&> rhs) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptRC4>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt&>(rhs));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const std::string&> userPassword, __zz_cib_AbiType_t<const std::string&> ownerPassword, __zz_cib_AbiType_t<int> protection, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm> eAlgorithm, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfKeyLength> eKeyLength) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptRC4>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const std::string&>(userPassword),
    __zz_cib_::__zz_cib_FromAbiType<const std::string&>(ownerPassword),
    __zz_cib_::__zz_cib_FromAbiType<int>(protection),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>(eAlgorithm),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfKeyLength>(eKeyLength));
  }
  static void __zz_cib_decl __zz_cib_delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Authenticate_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncryptRC4::Authenticate(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Encrypt_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> outLen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptRC4::Encrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Decrypt_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long&> outLen) {
    __zz_cib_obj->::PoDoFo::PdfEncryptRC4::Decrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long&>(outLen)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> __zz_cib_decl CreateEncryptionInputStream_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pInputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_obj->::PoDoFo::PdfEncryptRC4::CreateEncryptionInputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pInputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateEncryptionOutputStream_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_obj->::PoDoFo::PdfEncryptRC4::CreateEncryptionOutputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateEncryptionKey_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    __zz_cib_obj->::PoDoFo::PdfEncryptRC4::GenerateEncryptionKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamOffset_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfEncryptRC4::CalculateStreamOffset()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamLength_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> length) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfEncryptRC4::CalculateStreamLength(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(length)
      )
    );
  }
  static ::PoDoFo::PdfEncrypt* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class363(::PoDoFo::PdfEncryptRC4* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptRC4* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class363(::PoDoFo::PdfEncrypt* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptRC4*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfEncryptRC4Base* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class365(::PoDoFo::PdfEncryptRC4* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptRC4* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class365(::PoDoFo::PdfEncryptRC4Base* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptRC4*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfEncryptMD5Base* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class366(::PoDoFo::PdfEncryptRC4* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfEncryptRC4* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class366(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfEncryptRC4*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class368 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::Authenticate_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::Encrypt_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::Decrypt_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::CreateEncryptionInputStream_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::CreateEncryptionOutputStream_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::GenerateEncryptionKey_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::CalculateStreamOffset_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::CalculateStreamLength_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_cast_to___zz_cib_Class363),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_cast_from___zz_cib_Class363),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_cast_to___zz_cib_Class365),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_cast_from___zz_cib_Class365),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_cast_to___zz_cib_Class366),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_cast_from___zz_cib_Class366),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptRC4>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 20 };
  return &methodTable;
}
}}}
