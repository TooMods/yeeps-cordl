#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Condition)
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
class Condition;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Condition);
// Type: Amazon.Auth.AccessControlPolicy::Condition
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::Condition*
class CORDL_TYPE Condition : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConditionKey, put = set_ConditionKey))::StringW ConditionKey;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  __declspec(property(get = get_Values, put = set_Values))::ArrayW<::StringW, ::Array<::StringW>*> Values;

  /// @brief Field conditionKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_conditionKey, put = __cordl_internal_set_conditionKey))::StringW conditionKey;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::StringW type;

  /// @brief Field values, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values))::ArrayW<::StringW, ::Array<::StringW>*> values;

  static inline ::Amazon::Auth::AccessControlPolicy::Condition* New_ctor();

  static inline ::Amazon::Auth::AccessControlPolicy::Condition* New_ctor(::StringW type, ::StringW conditionKey, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  constexpr ::StringW const& __cordl_internal_get_conditionKey() const;

  constexpr ::StringW& __cordl_internal_get_conditionKey();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_values() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_conditionKey(::StringW value);

  constexpr void __cordl_internal_set_type(::StringW value);

  constexpr void __cordl_internal_set_values(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x25e90e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25e90e8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW type, ::StringW conditionKey, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method get_ConditionKey, addr 0x25e9134, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ConditionKey();

  /// @brief Method get_Type, addr 0x25e9124, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method get_Values, addr 0x25e9144, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Values();

  /// @brief Method set_ConditionKey, addr 0x25e913c, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionKey(::StringW value);

  /// @brief Method set_Type, addr 0x25e912c, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

  /// @brief Method set_Values, addr 0x25e914c, size 0x8, virtual false, abstract: false, final false
  inline void set_Values(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Condition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Condition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Condition(Condition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Condition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Condition(Condition const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field conditionKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___conditionKey;

  /// @brief Field values, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Condition, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Condition, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Condition, ___conditionKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Condition, ___values) == 0x20, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Condition);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Condition*, "Amazon.Auth.AccessControlPolicy", "Condition");
