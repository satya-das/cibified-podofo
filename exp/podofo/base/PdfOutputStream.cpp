#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfRefCountedBuffer.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfOutputStream::PdfOutputStream(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutputStream::PdfOutputStream(PdfOutputStream&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutputStream::~PdfOutputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfOutputStream::Write(const std::string& s) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Write_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(s)>(s)
    )
  );
}

PoDoFo::PdfOutputStream::PdfOutputStream()
  : PoDoFo::PdfOutputStream(__zz_cib_MyHelper::__zz_cib_new_0(
    this))
  {}
}
namespace PoDoFo {

PoDoFo::PdfFileOutputStream::PdfFileOutputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOutputStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class387(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileOutputStream::PdfFileOutputStream(PdfFileOutputStream&& rhs)
  : ::PoDoFo::PdfOutputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileOutputStream::PdfFileOutputStream(const ::PoDoFo::PdfFileOutputStream& __zz_cib_param0)
  : PoDoFo::PdfFileOutputStream(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfFileOutputStream::PdfFileOutputStream(const char* pszFilename)
  : PoDoFo::PdfFileOutputStream(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))))
  {}

PoDoFo::PdfFileOutputStream::~PdfFileOutputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFileOutputStream::Write(const char* pBuffer, ::PoDoFo::pdf_long lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Write_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfFileOutputStream::Close() {
  __zz_cib_MyHelper::Close_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace PoDoFo {

PoDoFo::PdfMemoryOutputStream::PdfMemoryOutputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOutputStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class387(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemoryOutputStream::PdfMemoryOutputStream(PdfMemoryOutputStream&& rhs)
  : ::PoDoFo::PdfOutputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemoryOutputStream::PdfMemoryOutputStream(const ::PoDoFo::PdfMemoryOutputStream& __zz_cib_param0)
  : PoDoFo::PdfMemoryOutputStream(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfMemoryOutputStream::PdfMemoryOutputStream(::PoDoFo::pdf_long lInitial)
  : PoDoFo::PdfMemoryOutputStream(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(lInitial)>(std::move(lInitial))))
  {}

PoDoFo::PdfMemoryOutputStream::PdfMemoryOutputStream(char* pBuffer, ::PoDoFo::pdf_long lLen)
  : PoDoFo::PdfMemoryOutputStream(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
  {}

PoDoFo::PdfMemoryOutputStream::~PdfMemoryOutputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemoryOutputStream::Write(const char* pBuffer, ::PoDoFo::pdf_long lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Write_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfMemoryOutputStream::Close() {
  __zz_cib_MyHelper::Close_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemoryOutputStream::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetLength_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

char* PoDoFo::PdfMemoryOutputStream::TakeBuffer() {
  return __zz_cib_::__zz_cib_FromAbiType<char*>(
    __zz_cib_MyHelper::TakeBuffer_7<__zz_cib_::__zz_cib_AbiType_t<char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfDeviceOutputStream::PdfDeviceOutputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOutputStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class387(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDeviceOutputStream::PdfDeviceOutputStream(PdfDeviceOutputStream&& rhs)
  : ::PoDoFo::PdfOutputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDeviceOutputStream::PdfDeviceOutputStream(const ::PoDoFo::PdfDeviceOutputStream& __zz_cib_param0)
  : PoDoFo::PdfDeviceOutputStream(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfDeviceOutputStream::~PdfDeviceOutputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

PoDoFo::PdfDeviceOutputStream::PdfDeviceOutputStream(::PoDoFo::PdfOutputDevice* pDevice)
  : PoDoFo::PdfDeviceOutputStream(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))))
  {}

::PoDoFo::pdf_long PoDoFo::PdfDeviceOutputStream::Write(const char* pBuffer, ::PoDoFo::pdf_long lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Write_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfDeviceOutputStream::Close() {
  __zz_cib_MyHelper::Close_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace PoDoFo {

PoDoFo::PdfBufferOutputStream::PdfBufferOutputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOutputStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class387(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfBufferOutputStream::PdfBufferOutputStream(PdfBufferOutputStream&& rhs)
  : ::PoDoFo::PdfOutputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfBufferOutputStream::PdfBufferOutputStream(const ::PoDoFo::PdfBufferOutputStream& __zz_cib_param0)
  : PoDoFo::PdfBufferOutputStream(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfBufferOutputStream::~PdfBufferOutputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

PoDoFo::PdfBufferOutputStream::PdfBufferOutputStream(::PoDoFo::PdfRefCountedBuffer* pBuffer)
  : PoDoFo::PdfBufferOutputStream(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer))))
  {}

::PoDoFo::pdf_long PoDoFo::PdfBufferOutputStream::Write(const char* pBuffer, ::PoDoFo::pdf_long lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Write_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfBufferOutputStream::Close() {
  __zz_cib_MyHelper::Close_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

::PoDoFo::pdf_long PoDoFo::PdfBufferOutputStream::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetLength_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfOutputStream> : public ::PoDoFo::PdfOutputStream {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class387::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class387::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfOutputStream(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfOutputStream* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void Close() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Close_4>(
      __zz_cib_h_
    );
  }
  ::PoDoFo::pdf_long Write(const char* pBuffer, ::PoDoFo::pdf_long lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_2>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfOutputStream* __zz_cib_Helper<::PoDoFo::PdfOutputStream>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class388::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFileOutputStream>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFileOutputStream>::__zz_cib_cast_from___zz_cib_Class387(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class389::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfMemoryOutputStream>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfMemoryOutputStream>::__zz_cib_cast_from___zz_cib_Class387(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class390::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfDeviceOutputStream>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfDeviceOutputStream>::__zz_cib_cast_from___zz_cib_Class387(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class391::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfBufferOutputStream>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfBufferOutputStream>::__zz_cib_cast_from___zz_cib_Class387(h)
    );
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputStream>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfOutputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfOutputStream;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_0(::PoDoFo::PdfOutputStream* __zz_cib_obj) {
    __zz_cib_obj->Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_1(::PoDoFo::PdfOutputStream* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_2(::PoDoFo::PdfOutputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfOutputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class387 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::Close_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::Write_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfOutputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class387::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFileOutputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFileOutputStream;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_0(::PoDoFo::PdfFileOutputStream* __zz_cib_obj) {
    __zz_cib_obj->Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_1(::PoDoFo::PdfFileOutputStream* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_2(::PoDoFo::PdfFileOutputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFileOutputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class388 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::Close_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::Write_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFileOutputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class388::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfMemoryOutputStream;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_0(::PoDoFo::PdfMemoryOutputStream* __zz_cib_obj) {
    __zz_cib_obj->Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_1(::PoDoFo::PdfMemoryOutputStream* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_2(::PoDoFo::PdfMemoryOutputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class389 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::Close_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::Write_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class389::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfDeviceOutputStream;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_0(::PoDoFo::PdfDeviceOutputStream* __zz_cib_obj) {
    __zz_cib_obj->Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_1(::PoDoFo::PdfDeviceOutputStream* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_2(::PoDoFo::PdfDeviceOutputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class390 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::Close_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::Write_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class390::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfBufferOutputStream;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_0(::PoDoFo::PdfBufferOutputStream* __zz_cib_obj) {
    __zz_cib_obj->Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_1(::PoDoFo::PdfBufferOutputStream* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_2(::PoDoFo::PdfBufferOutputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfBufferOutputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class391 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::Close_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::Write_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfBufferOutputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class391::__zz_cib_GetMethodTable();
}
}

