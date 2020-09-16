#include "podofo/base/PdfInputDevice.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfInputDevice::PdfInputDevice(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputDevice::PdfInputDevice(PdfInputDevice&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputDevice::PdfInputDevice(const ::PoDoFo::PdfInputDevice& __zz_cib_param0)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfInputDevice::PdfInputDevice(const char* pszFilename)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))))
  {}

PoDoFo::PdfInputDevice::PdfInputDevice(const char* pBuffer, size_t lLen)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
  {}

PoDoFo::PdfInputDevice::PdfInputDevice(const std::istream* pInStream)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pInStream)>(std::move(pInStream))))
  {}

PoDoFo::PdfInputDevice::~PdfInputDevice() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_4(
    h
  );
}

void PoDoFo::PdfInputDevice::Close() {
  __zz_cib_MyHelper::Close_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

std::streamoff PoDoFo::PdfInputDevice::Tell() const {
  return __zz_cib_::__zz_cib_FromAbiType<std::streamoff>(
    __zz_cib_MyHelper::Tell_6<__zz_cib_::__zz_cib_AbiType_t<std::streamoff>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfInputDevice::GetChar() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetChar_7<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfInputDevice::Look() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::Look_8<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInputDevice::Seek(std::streamoff off, std::ios_base::seekdir dir) {
  __zz_cib_MyHelper::Seek_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(off)>(std::move(off)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dir)>(std::move(dir))
  );
}

std::streamoff PoDoFo::PdfInputDevice::Read(char* pBuffer, std::streamsize lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<std::streamoff>(
    __zz_cib_MyHelper::Read_10<__zz_cib_::__zz_cib_AbiType_t<std::streamoff>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

bool PoDoFo::PdfInputDevice::Eof() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Eof_11<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfInputDevice::Bad() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Bad_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInputDevice::Clear(std::ios_base::iostate state) const {
  __zz_cib_MyHelper::Clear_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(state)>(std::move(state))
  );
}

bool PoDoFo::PdfInputDevice::IsSeekable() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSeekable_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInputDevice::SetSeekable(bool bIsSeekable) {
  __zz_cib_MyHelper::SetSeekable_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bIsSeekable)>(std::move(bIsSeekable))
  );
}

PoDoFo::PdfInputDevice::PdfInputDevice()
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_new_16(
    this))
  {}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfInputDevice> : public ::PoDoFo::PdfInputDevice {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class377::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class377::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfInputDevice(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfInputDevice* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void Clear(std::ios_base::iostate state) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(state)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Clear_13>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(state)>(std::move(state))
    );
  }
  bool Eof() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Eof_11>(
        __zz_cib_h_
      )
    );
  }
  std::streamoff Tell() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<std::streamoff>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<std::streamoff>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Tell_6>(
        __zz_cib_h_
      )
    );
  }
  void Close() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Close_5>(
      __zz_cib_h_
    );
  }
  bool Bad() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Bad_12>(
        __zz_cib_h_
      )
    );
  }
  int GetChar() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetChar_7>(
        __zz_cib_h_
      )
    );
  }
  void Seek(std::streamoff off, std::ios_base::seekdir dir) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(off)>, __zz_cib_AbiType_t<decltype(dir)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Seek_9>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(off)>(std::move(off)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dir)>(std::move(dir))
    );
  }
  std::streamoff Read(char* pBuffer, std::streamsize lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<std::streamoff>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<std::streamoff>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Read_10>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
  int Look() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Look_8>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfInputDevice* __zz_cib_Helper<::PoDoFo::PdfInputDevice>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class377::__zz_cib_classid:
    return new ::PoDoFo::PdfInputDevice(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfInputDevice>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfInputDevice> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfInputDevice;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clear_0(const ::PoDoFo::PdfInputDevice* __zz_cib_obj, __zz_cib_AbiType_t<std::ios_base::iostate> state) {
    __zz_cib_obj->Clear(
      __zz_cib_::__zz_cib_FromAbiType<std::ios_base::iostate>(state)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Eof_1(const ::PoDoFo::PdfInputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->Eof()
    );
  }
  static __zz_cib_AbiType_t<std::streamoff> __zz_cib_decl Tell_2(const ::PoDoFo::PdfInputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::streamoff>(
      __zz_cib_obj->Tell()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_3(::PoDoFo::PdfInputDevice* __zz_cib_obj) {
    __zz_cib_obj->Close();
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Bad_4(const ::PoDoFo::PdfInputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->Bad()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetChar_5(const ::PoDoFo::PdfInputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->GetChar()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_6(::PoDoFo::PdfInputDevice* __zz_cib_obj, __zz_cib_AbiType_t<std::streamoff> off, __zz_cib_AbiType_t<std::ios_base::seekdir> dir) {
    __zz_cib_obj->Seek(
      __zz_cib_::__zz_cib_FromAbiType<std::streamoff>(off),
      __zz_cib_::__zz_cib_FromAbiType<std::ios_base::seekdir>(dir)
    );
  }
  static __zz_cib_AbiType_t<std::streamoff> __zz_cib_decl Read_7(::PoDoFo::PdfInputDevice* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<std::streamsize> lLen) {
    return __zz_cib_ToAbiType<std::streamoff>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<std::streamsize>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl Look_8(const ::PoDoFo::PdfInputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->Look()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_9(::PoDoFo::PdfInputDevice* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfInputDevice>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class377 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Clear_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Eof_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Tell_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Close_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Bad_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::GetChar_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Seek_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Read_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Look_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::__zz_cib_delete_9)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfInputDevice>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class377::__zz_cib_GetMethodTable();
}
}

