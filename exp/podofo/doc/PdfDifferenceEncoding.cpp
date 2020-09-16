#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDifferenceEncoding.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfFont.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfEncodingDifference::PdfEncodingDifference(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncodingDifference::PdfEncodingDifference(PdfEncodingDifference&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncodingDifference::~PdfEncodingDifference() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_0(
    h
  );
}

PoDoFo::PdfEncodingDifference::PdfEncodingDifference()
  : PoDoFo::PdfEncodingDifference(__zz_cib_MyHelper::__zz_cib_new_1(
    ))
  {}

PoDoFo::PdfEncodingDifference::PdfEncodingDifference(const ::PoDoFo::PdfEncodingDifference& rhs)
  : PoDoFo::PdfEncodingDifference(__zz_cib_MyHelper::__zz_cib_copy_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
  {}

const ::PoDoFo::PdfEncodingDifference& PoDoFo::PdfEncodingDifference::operator=(const ::PoDoFo::PdfEncodingDifference& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncodingDifference&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfEncodingDifference::AddDifference(int nCode, ::PoDoFo::pdf_uint16 unicodeValue) {
  __zz_cib_MyHelper::AddDifference_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nCode)>(std::move(nCode)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(unicodeValue)>(std::move(unicodeValue))
  );
}

void PoDoFo::PdfEncodingDifference::AddDifference(int nCode, ::PoDoFo::pdf_uint16 unicodeValue, const ::PoDoFo::PdfName& rName, bool bExplicitNames) {
  __zz_cib_MyHelper::AddDifference_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nCode)>(std::move(nCode)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(unicodeValue)>(std::move(unicodeValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bExplicitNames)>(std::move(bExplicitNames))
  );
}

bool PoDoFo::PdfEncodingDifference::Contains(int nCode, ::PoDoFo::PdfName& rName, ::PoDoFo::pdf_uint16& rValue) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Contains_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nCode)>(std::move(nCode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rValue)>(rValue)
    )
  );
}

bool PoDoFo::PdfEncodingDifference::ContainsUnicodeValue(::PoDoFo::pdf_uint16 unicodeValue, char& rValue) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::ContainsUnicodeValue_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(unicodeValue)>(std::move(unicodeValue)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rValue)>(rValue)
    )
  );
}

void PoDoFo::PdfEncodingDifference::ToArray(::PoDoFo::PdfArray& rArray) {
  __zz_cib_MyHelper::ToArray_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rArray)>(rArray)
  );
}

size_t PoDoFo::PdfEncodingDifference::GetCount() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetCount_9<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfEncoding(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class350(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(PdfDifferenceEncoding&& rhs)
  : ::PoDoFo::PdfEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(const ::PoDoFo::PdfDifferenceEncoding& __zz_cib_param0)
  : PoDoFo::PdfDifferenceEncoding(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfDifferenceEncoding::~PdfDifferenceEncoding() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfDocument* pParent, bool bAutoDelete)
  : PoDoFo::PdfDifferenceEncoding(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDifference)>(rDifference),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bAutoDelete)>(std::move(bAutoDelete))))
  {}

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfVecObjects* pParent, bool bAutoDelete)
  : PoDoFo::PdfDifferenceEncoding(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDifference)>(rDifference),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bAutoDelete)>(std::move(bAutoDelete))))
  {}

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfDifferenceEncoding::EBaseEncoding eBaseEncoding, ::PoDoFo::PdfDocument* pParent, bool bAutoDelete)
  : PoDoFo::PdfDifferenceEncoding(__zz_cib_MyHelper::__zz_cib_new_4(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDifference)>(rDifference),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eBaseEncoding)>(std::move(eBaseEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bAutoDelete)>(std::move(bAutoDelete))))
  {}

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(const ::PoDoFo::PdfEncodingDifference& rDifference, ::PoDoFo::PdfDifferenceEncoding::EBaseEncoding eBaseEncoding, ::PoDoFo::PdfVecObjects* pParent, bool bAutoDelete)
  : PoDoFo::PdfDifferenceEncoding(__zz_cib_MyHelper::__zz_cib_new_5(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDifference)>(rDifference),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eBaseEncoding)>(std::move(eBaseEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bAutoDelete)>(std::move(bAutoDelete))))
  {}

PoDoFo::PdfDifferenceEncoding::PdfDifferenceEncoding(::PoDoFo::PdfObject* pObject, bool bAutoDelete, bool bExplicitNames)
  : PoDoFo::PdfDifferenceEncoding(__zz_cib_MyHelper::__zz_cib_new_6(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bAutoDelete)>(std::move(bAutoDelete)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bExplicitNames)>(std::move(bExplicitNames))))
  {}

::PoDoFo::pdf_uint16 PoDoFo::PdfDifferenceEncoding::NameToUnicodeID(const ::PoDoFo::PdfName& rName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
    __zz_cib_MyHelper::NameToUnicodeID_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint16>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)
    )
  );
}

::PoDoFo::PdfName PoDoFo::PdfDifferenceEncoding::UnicodeIDToName(::PoDoFo::pdf_uint16 inCodePoint) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName>(
    __zz_cib_MyHelper::UnicodeIDToName_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfName>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(inCodePoint)>(std::move(inCodePoint))
    )
  );
}

void PoDoFo::PdfDifferenceEncoding::AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const {
  __zz_cib_MyHelper::AddToDictionary_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
  );
}

::PoDoFo::PdfString PoDoFo::PdfDifferenceEncoding::ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ConvertToUnicode_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

::PoDoFo::PdfRefCountedBuffer PoDoFo::PdfDifferenceEncoding::ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
    __zz_cib_MyHelper::ConvertToEncoding_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

bool PoDoFo::PdfDifferenceEncoding::IsAutoDelete() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsAutoDelete_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfDifferenceEncoding::IsSingleByteEncoding() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSingleByteEncoding_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfEncodingDifference& PoDoFo::PdfDifferenceEncoding::GetDifferences() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncodingDifference&>(
    __zz_cib_MyHelper::GetDifferences_14<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncodingDifference&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_uint16 PoDoFo::PdfDifferenceEncoding::GetCharCode(int nIndex) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
    __zz_cib_MyHelper::GetCharCode_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint16>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfDifferenceEncoding::GetID() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetID_16<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfDifferenceEncoding;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetCharCode_0(const ::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->GetCharCode(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_1(const ::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer> __zz_cib_decl ConvertToEncoding_2(const ::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_obj->ConvertToEncoding(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_3(const ::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->GetID()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ConvertToUnicode_4(const ::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rEncodedString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->ConvertToUnicode(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rEncodedString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAutoDelete_5(const ::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsAutoDelete()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSingleByteEncoding_6(const ::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSingleByteEncoding()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_7(::PoDoFo::PdfDifferenceEncoding* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class416 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::GetCharCode_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::AddToDictionary_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::ConvertToEncoding_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::GetID_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::ConvertToUnicode_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::IsAutoDelete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::IsSingleByteEncoding_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_delete_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfDifferenceEncoding>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class416::__zz_cib_GetMethodTable();
}
}

