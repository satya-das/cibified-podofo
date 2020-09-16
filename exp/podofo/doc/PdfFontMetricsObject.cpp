#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetricsObject.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfFontMetricsObject::PdfFontMetricsObject(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontMetrics(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class437(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsObject::PdfFontMetricsObject(PdfFontMetricsObject&& rhs)
  : ::PoDoFo::PdfFontMetrics(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsObject::PdfFontMetricsObject(::PoDoFo::PdfObject* pFont, ::PoDoFo::PdfObject* pDescriptor, const ::PoDoFo::PdfEncoding* const pEncoding)
  : PoDoFo::PdfFontMetricsObject(__zz_cib_MyHelper::__zz_cib_new_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))))
  {}

PoDoFo::PdfFontMetricsObject::~PdfFontMetricsObject() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

void PoDoFo::PdfFontMetricsObject::GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const {
  __zz_cib_MyHelper::GetWidthArray_2<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
  );
}

double PoDoFo::PdfFontMetricsObject::GetGlyphWidth(int nGlyphId) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_3<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetGlyphWidth(const char* pszGlyphname) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_4<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
    )
  );
}

void PoDoFo::PdfFontMetricsObject::GetBoundingBox(::PoDoFo::PdfArray& array) const {
  __zz_cib_MyHelper::GetBoundingBox_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
  );
}

double PoDoFo::PdfFontMetricsObject::CharWidth(unsigned char c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::CharWidth_6<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsObject::UnicodeCharWidth(unsigned short c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::UnicodeCharWidth_7<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetLineSpacing() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetLineSpacing_8<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetUnderlineThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlineThickness_9<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetUnderlinePosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlinePosition_10<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetStrikeOutPosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeOutPosition_11<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetStrikeoutThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeoutThickness_12<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsObject::GetFontname() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontname_13<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned int PoDoFo::PdfFontMetricsObject::GetWeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned int>(
    __zz_cib_MyHelper::GetWeight_14<__zz_cib_::__zz_cib_AbiType_t<unsigned int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetAscent_15<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetPdfAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfAscent_16<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetDescent_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetPdfDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfDescent_18<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfFontMetricsObject::GetItalicAngle() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetItalicAngle_19<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

long PoDoFo::PdfFontMetricsObject::GetGlyphId(long lUnicode) const {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetGlyphId_20<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
    )
  );
}

bool PoDoFo::PdfFontMetricsObject::IsSymbol() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSymbol_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsObject::GetFontData() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontData_22<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFontMetricsObject::GetFontDataLen() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetFontDataLen_23<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFontMetricsObject;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_0(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_1(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_2(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_3(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_4(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_5(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_6(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_7(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_8(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_9(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_10(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_11(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_12(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_13(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_14(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_15(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_16(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontname()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_17(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_18(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_19(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_20(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetFontDataLen()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_21(const ::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetAscent()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_22(::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFontMetricsObject>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class440 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::IsSymbol_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetItalicAngle_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetDescent_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetPdfAscent_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::UnicodeCharWidth_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetWidthArray_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetUnderlineThickness_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::CharWidth_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetStrikeOutPosition_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetGlyphWidth_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetGlyphWidth_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetWeight_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetLineSpacing_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetUnderlinePosition_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetGlyphId_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetBoundingBox_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetFontname_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetStrikeoutThickness_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetPdfDescent_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetFontData_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetFontDataLen_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetAscent_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::__zz_cib_delete_22)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 23 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFontMetricsObject>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class440::__zz_cib_GetMethodTable();
}
}

