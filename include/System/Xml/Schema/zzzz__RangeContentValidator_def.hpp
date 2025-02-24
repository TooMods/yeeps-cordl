#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RangeContentValidator)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class ValidationState;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class RangeContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::RangeContentValidator);
// Type: System.Xml.Schema::RangeContentValidator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::RangeContentValidator*
class CORDL_TYPE RangeContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
  // Declarations
  /// @brief Field endMarkerPos, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_endMarkerPos, put = __cordl_internal_set_endMarkerPos)) int32_t endMarkerPos;

  /// @brief Field firstpos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_firstpos, put = __cordl_internal_set_firstpos))::System::Xml::Schema::BitSet* firstpos;

  /// @brief Field followpos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_followpos, put = __cordl_internal_set_followpos))::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos;

  /// @brief Field minMaxNodesCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_minMaxNodesCount, put = __cordl_internal_set_minMaxNodesCount)) int32_t minMaxNodesCount;

  /// @brief Field positions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions))::System::Xml::Schema::Positions* positions;

  /// @brief Field positionsWithRangeTerminals, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_positionsWithRangeTerminals, put = __cordl_internal_set_positionsWithRangeTerminals))::System::Xml::Schema::BitSet* positionsWithRangeTerminals;

  /// @brief Field symbols, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_symbols, put = __cordl_internal_set_symbols))::System::Xml::Schema::SymbolsDictionary* symbols;

  /// @brief Method CompleteValidation, addr 0x2face38, size 0x18, virtual true, abstract: false, final false
  inline bool CompleteValidation(::System::Xml::Schema::ValidationState* context);

  /// @brief Method ExpectedElements, addr 0x2face50, size 0x268, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);

  /// @brief Method ExpectedParticles, addr 0x2fad0b8, size 0x204, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method InitValidation, addr 0x2fac408, size 0x1a0, virtual true, abstract: false, final false
  inline void InitValidation(::System::Xml::Schema::ValidationState* context);

  static inline ::System::Xml::Schema::RangeContentValidator* New_ctor(::System::Xml::Schema::BitSet* firstpos,
                                                                       ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                                       ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                                       ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable,
                                                                       ::System::Xml::Schema::BitSet* positionsWithRangeTerminals, int32_t minmaxNodesCount);

  /// @brief Method ValidateElement, addr 0x2fac5a8, size 0x890, virtual true, abstract: false, final false
  inline ::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ByRef<int32_t> errorCode);

  constexpr int32_t const& __cordl_internal_get_endMarkerPos() const;

  constexpr int32_t& __cordl_internal_get_endMarkerPos();

  constexpr ::System::Xml::Schema::BitSet*& __cordl_internal_get_firstpos();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& __cordl_internal_get_firstpos() const;

  constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> const& __cordl_internal_get_followpos() const;

  constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>& __cordl_internal_get_followpos();

  constexpr int32_t const& __cordl_internal_get_minMaxNodesCount() const;

  constexpr int32_t& __cordl_internal_get_minMaxNodesCount();

  constexpr ::System::Xml::Schema::Positions*& __cordl_internal_get_positions();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Positions*> const& __cordl_internal_get_positions() const;

  constexpr ::System::Xml::Schema::BitSet*& __cordl_internal_get_positionsWithRangeTerminals();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& __cordl_internal_get_positionsWithRangeTerminals() const;

  constexpr ::System::Xml::Schema::SymbolsDictionary*& __cordl_internal_get_symbols();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> const& __cordl_internal_get_symbols() const;

  constexpr void __cordl_internal_set_endMarkerPos(int32_t value);

  constexpr void __cordl_internal_set_firstpos(::System::Xml::Schema::BitSet* value);

  constexpr void __cordl_internal_set_followpos(::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> value);

  constexpr void __cordl_internal_set_minMaxNodesCount(int32_t value);

  constexpr void __cordl_internal_set_positions(::System::Xml::Schema::Positions* value);

  constexpr void __cordl_internal_set_positionsWithRangeTerminals(::System::Xml::Schema::BitSet* value);

  constexpr void __cordl_internal_set_symbols(::System::Xml::Schema::SymbolsDictionary* value);

  /// @brief Method .ctor, addr 0x2fac34c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                    ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType,
                    bool isEmptiable, ::System::Xml::Schema::BitSet* positionsWithRangeTerminals, int32_t minmaxNodesCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeContentValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RangeContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeContentValidator(RangeContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeContentValidator(RangeContentValidator const&) = delete;

  /// @brief Field firstpos, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* ___firstpos;

  /// @brief Field followpos, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> ___followpos;

  /// @brief Field positionsWithRangeTerminals, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* ___positionsWithRangeTerminals;

  /// @brief Field symbols, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::SymbolsDictionary* ___symbols;

  /// @brief Field positions, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::Positions* ___positions;

  /// @brief Field minMaxNodesCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___minMaxNodesCount;

  /// @brief Field endMarkerPos, offset: 0x44, size: 0x4, def value: None
  int32_t ___endMarkerPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RangeContentValidator, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangeContentValidator, ___firstpos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangeContentValidator, ___followpos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangeContentValidator, ___positionsWithRangeTerminals) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangeContentValidator, ___symbols) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangeContentValidator, ___positions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangeContentValidator, ___minMaxNodesCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangeContentValidator, ___endMarkerPos) == 0x44, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::RangeContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RangeContentValidator*, "System.Xml.Schema", "RangeContentValidator");
