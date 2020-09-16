#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfString> : public ::PoDoFo::PdfString {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfString::PdfString;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_AbiType_t<const std::string&> sString, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const std::string&>(sString),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl setFromWchar_t_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const wchar_t*> pszString, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->::PoDoFo::PdfString::setFromWchar_t(
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszString),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_4(__zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<bool> bHex, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bHex),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_5(__zz_cib_AbiType_t<const ::PoDoFo::pdf_utf8*> pszStringUtf8) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_utf8*>(pszStringUtf8));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_6(__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> pszStringUtf16) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(pszStringUtf16));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_7(__zz_cib_AbiType_t<const ::PoDoFo::pdf_utf8*> pszStringUtf8, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_utf8*>(pszStringUtf8),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_8(__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> pszStringUtf16, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(pszStringUtf16),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_10(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetHexData_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszHex, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfString::SetHexData(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszHex),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsValid_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfString::IsValid()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHex_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfString::IsHex()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsUnicode_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfString::IsUnicode()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetString_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfString::GetString()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetUnicode_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfString::GetUnicode()
    );
  }
  static __zz_cib_AbiType_t<const std::string&> __zz_cib_decl GetStringUtf8_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const std::string&>(
      __zz_cib_obj->::PoDoFo::PdfString::GetStringUtf8()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfString::GetLength()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetUnicodeLength_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfString::GetUnicodeLength()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetCharacterLength_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfString::GetCharacterLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_21(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfString::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl __zz_cib_OperatorEqual_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfString::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_23(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfString::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_24(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfString::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_25(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfString::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_26(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfString::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rhs)
      )
    );
  }
#ifdef PODOFO_PUBLIC_STRING_HEX_CODEC
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl HexEncode_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfString::HexEncode()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl HexDecode_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfString::HexDecode()
    );
  }
#endif
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ToUnicode_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfString::ToUnicode()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer&> __zz_cib_decl GetBuffer_30(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer&>(
      __zz_cib_obj->::PoDoFo::PdfString::GetBuffer()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl ConvertUTF8toUTF16_31(__zz_cib_AbiType_t<const ::PoDoFo::pdf_utf8*> pszUtf8, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16*> pszUtf16, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLenUtf16) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      ::PoDoFo::PdfString::ConvertUTF8toUTF16(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_utf8*>(pszUtf8),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16*>(pszUtf16),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLenUtf16)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl ConvertUTF8toUTF16_32(__zz_cib_AbiType_t<const ::PoDoFo::pdf_utf8*> pszUtf8, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLenUtf8, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16*> pszUtf16, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLenUtf16, __zz_cib_AbiType_t<::PoDoFo::EPdfStringConversion> eConversion) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      ::PoDoFo::PdfString::ConvertUTF8toUTF16(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_utf8*>(pszUtf8),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLenUtf8),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16*>(pszUtf16),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLenUtf16),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfStringConversion>(eConversion)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl ConvertUTF16toUTF8_33(__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> pszUtf16, __zz_cib_AbiType_t<::PoDoFo::pdf_utf8*> pszUtf8, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLenUtf8) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      ::PoDoFo::PdfString::ConvertUTF16toUTF8(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(pszUtf16),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_utf8*>(pszUtf8),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLenUtf8)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl ConvertUTF16toUTF8_34(__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> pszUtf16, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLenUtf16, __zz_cib_AbiType_t<::PoDoFo::pdf_utf8*> pszUtf8, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLenUtf8, __zz_cib_AbiType_t<::PoDoFo::EPdfStringConversion> eConversion) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      ::PoDoFo::PdfString::ConvertUTF16toUTF8(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(pszUtf16),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLenUtf16),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_utf8*>(pszUtf8),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLenUtf8),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfStringConversion>(eConversion)
      )
    );
  }
  static ::PoDoFo::PdfDataType* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class346(::PoDoFo::PdfString* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfString* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class346(::PoDoFo::PdfDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfString*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class401 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::setFromWchar_t_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_new_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_copy_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_delete_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::SetHexData_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::IsValid_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::IsHex_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::IsUnicode_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::GetString_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::GetUnicode_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::GetStringUtf8_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::GetLength_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::GetUnicodeLength_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::GetCharacterLength_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::Write_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_OperatorEqual_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_OperatorGT_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_OperatorLT_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_OperatorCmpEq_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_OperatorNotEq_26),
#ifdef PODOFO_PUBLIC_STRING_HEX_CODEC
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::HexEncode_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::HexDecode_28),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::ToUnicode_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::GetBuffer_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::ConvertUTF8toUTF16_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::ConvertUTF8toUTF16_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::ConvertUTF16toUTF8_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::ConvertUTF16toUTF8_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_cast_to___zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfString>::__zz_cib_cast_from___zz_cib_Class346)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 37 };
  return &methodTable;
}
}}}
