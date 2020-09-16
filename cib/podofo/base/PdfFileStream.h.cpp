#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfFileStream.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include <vector>

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfFileStream>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfFileStream> : public ::PoDoFo::PdfFileStream {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFileStream>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfObject* pParent, ::PoDoFo::PdfOutputDevice* pDevice)
    : ::PoDoFo::PdfFileStream::PdfFileStream(    std::move(pParent),
    std::move(pDevice))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfFileStream& __zz_cib_param0)
    : ::PoDoFo::PdfFileStream::PdfFileStream(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void EndAppendImpl() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::EndAppendImpl_0>(
      __zz_cib_h_
    );
  }
  void BeginAppendImpl(const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(vecFilters)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::BeginAppendImpl_1>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }
  ::PoDoFo::pdf_long GetLength() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetLength_2>(
        __zz_cib_h_
      )
    );
  }
  void GetCopy(char** pBuffer, ::PoDoFo::pdf_long* lLen) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetCopy_3>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfEncrypt* pEncrypt) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(pEncrypt)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_4>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }
  void GetCopy(::PoDoFo::PdfOutputStream* pStream) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetCopy_5>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  const char* GetInternalBuffer() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetInternalBuffer_6>(
        __zz_cib_h_
      )
    );
  }
  void AppendImpl(const char* pszString, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszString)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AppendImpl_7>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  ::PoDoFo::pdf_long GetInternalBufferSize() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetInternalBufferSize_8>(
        __zz_cib_h_
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_9>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfFileStream)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class373::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFileStream> : public ::PoDoFo::PdfFileStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFileStream>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfFileStream::PdfFileStream;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFileStream>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pParent, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFileStream>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice));
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetEncrypted_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfFileStream::SetEncrypted(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfFileStream::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char**> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> lLen) {
    __zz_cib_obj->::PoDoFo::PdfFileStream::GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<char**>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfFileStream::GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFileStream::GetLength()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetInternalBuffer_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFileStream::GetInternalBuffer()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetInternalBufferSize_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFileStream::GetInternalBufferSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendImpl_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->::PoDoFo::PdfFileStream::BeginAppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AppendImpl_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->::PoDoFo::PdfFileStream::AppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendImpl_12(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFileStream::EndAppendImpl();
  }
  static ::PoDoFo::PdfStream* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class400(::PoDoFo::PdfFileStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFileStream* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class400(::PoDoFo::PdfStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFileStream*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class373 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::SetEncrypted_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::Write_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::GetCopy_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::GetCopy_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::GetLength_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::GetInternalBuffer_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::GetInternalBufferSize_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::BeginAppendImpl_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::AppendImpl_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::EndAppendImpl_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::__zz_cib_cast_to___zz_cib_Class400),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::__zz_cib_cast_from___zz_cib_Class400),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileStream>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 16 };
  return &methodTable;
}
}}}
