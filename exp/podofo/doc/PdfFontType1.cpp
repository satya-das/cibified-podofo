#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontType1.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfFontType1::PdfFontType1(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontSimple(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class441(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontType1::PdfFontType1(PdfFontType1&& rhs)
  : ::PoDoFo::PdfFontSimple(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontType1::~PdfFontType1() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_0(
    h
  );
}

PoDoFo::PdfFontType1::PdfFontType1(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent, bool bEmbed, bool bSubsetting)
  : PoDoFo::PdfFontType1(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bSubsetting)>(std::move(bSubsetting))))
  {}

PoDoFo::PdfFontType1::PdfFontType1(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfFontType1(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
  {}

PoDoFo::PdfFontType1::PdfFontType1(::PoDoFo::PdfFontType1* pFont, ::PoDoFo::PdfFontMetrics* pMetrics, const char* pszSuffix, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFontType1(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSuffix)>(std::move(pszSuffix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
  {}

void PoDoFo::PdfFontType1::InitBase14Font() {
  __zz_cib_MyHelper::InitBase14Font_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfFontType1::AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) {
  __zz_cib_MyHelper::AddUsedSubsettingGlyphs_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
  );
}

void PoDoFo::PdfFontType1::AddUsedGlyphname(const char* sGlyphName) {
  __zz_cib_MyHelper::AddUsedGlyphname_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sGlyphName)>(std::move(sGlyphName))
  );
}

void PoDoFo::PdfFontType1::EmbedSubsetFont() {
  __zz_cib_MyHelper::EmbedSubsetFont_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfFontType1::EmbedFontFile(::PoDoFo::PdfObject* pDescriptor) {
  __zz_cib_MyHelper::EmbedFontFile_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor))
  );
}
}
namespace PoDoFo {

PoDoFo::PdfType1Encrypt::PdfType1Encrypt(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfType1Encrypt::PdfType1Encrypt(PdfType1Encrypt&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfType1Encrypt::PdfType1Encrypt(const ::PoDoFo::PdfType1Encrypt& __zz_cib_param0)
  : PoDoFo::PdfType1Encrypt(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfType1Encrypt::~PdfType1Encrypt() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

PoDoFo::PdfType1Encrypt::PdfType1Encrypt()
  : PoDoFo::PdfType1Encrypt(__zz_cib_MyHelper::__zz_cib_new_2(
    ))
  {}

unsigned char PoDoFo::PdfType1Encrypt::Encrypt(unsigned char plain) {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned char>(
    __zz_cib_MyHelper::Encrypt_3<__zz_cib_::__zz_cib_AbiType_t<unsigned char>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(plain)>(std::move(plain))
    )
  );
}

unsigned char PoDoFo::PdfType1Encrypt::Decrypt(unsigned char cipher) {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned char>(
    __zz_cib_MyHelper::Decrypt_4<__zz_cib_::__zz_cib_AbiType_t<unsigned char>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cipher)>(std::move(cipher))
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontType1> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFontType1;
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFontFile_0(::PoDoFo::PdfFontType1* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDescriptor) {
    __zz_cib_obj->EmbedFontFile(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDescriptor)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetItalic_1(::PoDoFo::PdfFontType1* __zz_cib_obj, __zz_cib_AbiType_t<bool> bItalic) {
    __zz_cib_obj->SetItalic(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_2(::PoDoFo::PdfFontType1* __zz_cib_obj) {
    __zz_cib_obj->EmbedFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFont_3(::PoDoFo::PdfFontType1* __zz_cib_obj) {
    __zz_cib_obj->EmbedSubsetFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedSubsettingGlyphs_4(::PoDoFo::PdfFontType1* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lStringLen) {
    __zz_cib_obj->AddUsedSubsettingGlyphs(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteStringToStream_5(::PoDoFo::PdfFontType1* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString, __zz_cib_AbiType_t<::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->WriteStringToStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedGlyphname_6(::PoDoFo::PdfFontType1* __zz_cib_obj, __zz_cib_AbiType_t<const char*> sGlyphName) {
    __zz_cib_obj->AddUsedGlyphname(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(sGlyphName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBold_7(::PoDoFo::PdfFontType1* __zz_cib_obj, __zz_cib_AbiType_t<bool> bBold) {
    __zz_cib_obj->SetBold(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bBold)
    );
  }
  static void __zz_cib_decl __zz_cib_delete_8(::PoDoFo::PdfFontType1* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFontType1>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class444 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::EmbedFontFile_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::SetItalic_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::EmbedFont_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::EmbedSubsetFont_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::AddUsedSubsettingGlyphs_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::WriteStringToStream_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::AddUsedGlyphname_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::SetBold_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType1>::__zz_cib_delete_8)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFontType1>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class444::__zz_cib_GetMethodTable();
}
}

