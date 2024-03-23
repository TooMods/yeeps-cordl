#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParenthesizePropertyNameAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ParenthesizePropertyNameAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ParenthesizePropertyNameAttribute);
// Type: System.ComponentModel::ParenthesizePropertyNameAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ParenthesizePropertyNameAttribute*
class CORDL_TYPE ParenthesizePropertyNameAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::ParenthesizePropertyNameAttribute* Default;

  __declspec(property(get = get_NeedParenthesis)) bool NeedParenthesis;

  /// @brief Field needParenthesis, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_needParenthesis, put = __cordl_internal_set_needParenthesis)) bool needParenthesis;

  /// @brief Method Equals, addr 0x18e9770, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x18e97e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x18e97e8, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* New_ctor();

  static inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* New_ctor(bool needParenthesis);

  constexpr bool const& __cordl_internal_get_needParenthesis() const;

  constexpr bool& __cordl_internal_get_needParenthesis();

  constexpr void __cordl_internal_set_needParenthesis(bool value);

  /// @brief Method .ctor, addr 0x18e9724, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x18e9740, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool needParenthesis);

  static inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* getStaticF_Default();

  /// @brief Method get_NeedParenthesis, addr 0x18e9768, size 0x8, virtual false, abstract: false, final false
  inline bool get_NeedParenthesis();

  static inline void setStaticF_Default(::System::ComponentModel::ParenthesizePropertyNameAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParenthesizePropertyNameAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParenthesizePropertyNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParenthesizePropertyNameAttribute(ParenthesizePropertyNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParenthesizePropertyNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParenthesizePropertyNameAttribute(ParenthesizePropertyNameAttribute const&) = delete;

  /// @brief Field needParenthesis, offset: 0x10, size: 0x1, def value: None
  bool ___needParenthesis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ParenthesizePropertyNameAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ParenthesizePropertyNameAttribute, ___needParenthesis) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ParenthesizePropertyNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ParenthesizePropertyNameAttribute*, "System.ComponentModel", "ParenthesizePropertyNameAttribute");
