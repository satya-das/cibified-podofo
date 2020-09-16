#include "podofo/base/PdfData.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/doc/PdfSignOutputDevice.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfSignOutputDevice> : public ::PoDoFo::PdfSignOutputDevice {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfSignOutputDevice>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfOutputDevice* pRealDevice)
    : ::PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(    std::move(pRealDevice))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const char* pszFilename)
    : ::PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(    std::move(pszFilename))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfSignOutputDevice& __zz_cib_param0)
    : ::PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  size_t ReadForSignature(char* pBuffer, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::ReadForSignature_0>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
  bool HasSignaturePosition() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasSignaturePosition_1>(
        __zz_cib_h_
      )
    );
  }
  size_t GetSignatureSize() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetSignatureSize_2>(
        __zz_cib_h_
      )
    );
  }
  void AdjustByteRange() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AdjustByteRange_3>(
      __zz_cib_h_
    );
  }
  void SetSignatureSize(size_t lSignatureSize) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(lSignatureSize)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetSignatureSize_4>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(lSignatureSize)>(std::move(lSignatureSize))
    );
  }
  void Flush() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Flush_5>(
      __zz_cib_h_
    );
  }
  const ::PoDoFo::PdfData* GetSignatureBeacon() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfData*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfData*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetSignatureBeacon_6>(
        __zz_cib_h_
      )
    );
  }
  size_t Tell() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Tell_7>(
        __zz_cib_h_
      )
    );
  }
  void Print(const char* pszFormat) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszFormat)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Print_8>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
    );
  }
  void PrintV(const char* pszFormat, long lBytes, va_list argptr) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszFormat)>, __zz_cib_AbiType_t<decltype(lBytes)>, __zz_cib_AbiType_t<decltype(argptr)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::PrintV_9>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lBytes)>(std::move(lBytes)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(argptr)>(std::move(argptr))
    );
  }
  size_t GetLength() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetLength_10>(
        __zz_cib_h_
      )
    );
  }
  void Write(const char* pBuffer, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_11>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void SetSignature(const ::PoDoFo::PdfData& sigData) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(sigData)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetSignature_12>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(sigData)>(sigData)
    );
  }
  size_t Read(char* pBuffer, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Read_13>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
  void Seek(size_t offset) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(offset)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Seek_14>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_15>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfSignOutputDevice)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice> : public ::PoDoFo::PdfSignOutputDevice {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSignOutputDevice>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSignOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pRealDevice) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSignOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pRealDevice));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const char*> pszFilename) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSignOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename));
  }
  static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignatureSize_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> lSignatureSize) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::SetSignatureSize(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lSignatureSize)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetSignatureSize_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::GetSignatureSize()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfData*> __zz_cib_decl GetSignatureBeacon_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfData*>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::GetSignatureBeacon()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasSignaturePosition_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::HasSignaturePosition()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AdjustByteRange_8(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::AdjustByteRange();
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl ReadForSignature_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::ReadForSignature(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignature_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfData&> sigData) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::SetSignature(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData&>(sigData)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetLength_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Print_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Print(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Read_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> offset) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Seek(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(offset)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Tell_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Tell()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Flush_17(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Flush();
  }
  static ::PoDoFo::PdfOutputDevice* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class386(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSignOutputDevice* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class386(::PoDoFo::PdfOutputDevice* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSignOutputDevice*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class471 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::SetSignatureSize_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetSignatureSize_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetSignatureBeacon_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::HasSignaturePosition_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::AdjustByteRange_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::ReadForSignature_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::SetSignature_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetLength_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Print_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Write_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Read_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Seek_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Tell_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Flush_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_cast_to___zz_cib_Class386),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_cast_from___zz_cib_Class386),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 21 };
  return &methodTable;
}
}}}
