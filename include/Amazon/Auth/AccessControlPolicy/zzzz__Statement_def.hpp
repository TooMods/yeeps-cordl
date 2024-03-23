#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Auth/AccessControlPolicy/zzzz__Statement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Statement)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
namespace Amazon::Auth::AccessControlPolicy {
class Condition;
}
namespace Amazon::Auth::AccessControlPolicy {
class Principal;
}
namespace Amazon::Auth::AccessControlPolicy {
class Resource;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __Statement__StatementEffect;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
struct __Statement__StatementEffect;
}
namespace Amazon::Auth::AccessControlPolicy {
class Statement;
}
// Write type traits
MARK_VAL_T(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect);
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Statement);
// Type: ::StatementEffect
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: true
// CS Name: ::Statement::StatementEffect
struct CORDL_TYPE __Statement__StatementEffect {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Statement__StatementEffect_Unwrapped
  enum struct ____Statement__StatementEffect_Unwrapped : int32_t {
    __E_Allow = static_cast<int32_t>(0x0),
    __E_Deny = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Statement__StatementEffect_Unwrapped() const noexcept {
    return static_cast<____Statement__StatementEffect_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Statement__StatementEffect();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Statement__StatementEffect(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Allow value: static_cast<int32_t>(0x0)
  static ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect const Allow;

  /// @brief Field Deny value: static_cast<int32_t>(0x1)
  static ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect const Deny;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: Amazon.Auth.AccessControlPolicy::Statement
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::Statement*
class CORDL_TYPE Statement : public ::System::Object {
public:
  // Declarations
  using StatementEffect = ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect;

  __declspec(property(get = get_Actions, put = set_Actions))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* Actions;

  __declspec(property(get = get_Conditions, put = set_Conditions))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* Conditions;

  __declspec(property(get = get_Effect, put = set_Effect))::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect Effect;

  __declspec(property(get = get_Id, put = set_Id))::StringW Id;

  __declspec(property(get = get_Principals, put = set_Principals))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* Principals;

  __declspec(property(get = get_Resources, put = set_Resources))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* Resources;

  /// @brief Field actions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_actions, put = __cordl_internal_set_actions))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* actions;

  /// @brief Field conditions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_conditions,
                      put = __cordl_internal_set_conditions))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* conditions;

  /// @brief Field effect, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_effect, put = __cordl_internal_set_effect))::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect effect;

  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field principals, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_principals,
                      put = __cordl_internal_set_principals))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* principals;

  /// @brief Field resources, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_resources, put = __cordl_internal_set_resources))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* resources;

  static inline ::Amazon::Auth::AccessControlPolicy::Statement* New_ctor(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect effect);

  /// @brief Method WithActionIdentifiers, addr 0x25ec304, size 0x14c, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::Statement*
  WithActionIdentifiers(::ArrayW<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*, ::Array<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*> actions);

  /// @brief Method WithConditions, addr 0x25ec5bc, size 0x14c, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::Statement*
  WithConditions(::ArrayW<::Amazon::Auth::AccessControlPolicy::Condition*, ::Array<::Amazon::Auth::AccessControlPolicy::Condition*>*> conditions);

  /// @brief Method WithId, addr 0x25ec2dc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::Statement* WithId(::StringW id);

  /// @brief Method WithPrincipals, addr 0x25ec718, size 0x14c, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::Statement*
  WithPrincipals(::ArrayW<::Amazon::Auth::AccessControlPolicy::Principal*, ::Array<::Amazon::Auth::AccessControlPolicy::Principal*>*> principals);

  /// @brief Method WithResources, addr 0x25ec460, size 0x14c, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::Statement* WithResources(::ArrayW<::Amazon::Auth::AccessControlPolicy::Resource*, ::Array<::Amazon::Auth::AccessControlPolicy::Resource*>*> resources);

  constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*& __cordl_internal_get_actions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*> const& __cordl_internal_get_actions() const;

  constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*& __cordl_internal_get_conditions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*> const& __cordl_internal_get_conditions() const;

  constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect const& __cordl_internal_get_effect() const;

  constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect& __cordl_internal_get_effect();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*& __cordl_internal_get_principals();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*> const& __cordl_internal_get_principals() const;

  constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*& __cordl_internal_get_resources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*> const& __cordl_internal_get_resources() const;

  constexpr void __cordl_internal_set_actions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* value);

  constexpr void __cordl_internal_set_conditions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* value);

  constexpr void __cordl_internal_set_effect(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_principals(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* value);

  constexpr void __cordl_internal_set_resources(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* value);

  /// @brief Method .ctor, addr 0x25ec10c, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect effect);

  /// @brief Method get_Actions, addr 0x25ec2f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* get_Actions();

  /// @brief Method get_Conditions, addr 0x25ec5ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* get_Conditions();

  /// @brief Method get_Effect, addr 0x25ec2e4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect get_Effect();

  /// @brief Method get_Id, addr 0x25ec2cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_Principals, addr 0x25ec708, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* get_Principals();

  /// @brief Method get_Resources, addr 0x25ec450, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* get_Resources();

  /// @brief Method set_Actions, addr 0x25ec2fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Actions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* value);

  /// @brief Method set_Conditions, addr 0x25ec5b4, size 0x8, virtual false, abstract: false, final false
  inline void set_Conditions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* value);

  /// @brief Method set_Effect, addr 0x25ec2ec, size 0x8, virtual false, abstract: false, final false
  inline void set_Effect(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect value);

  /// @brief Method set_Id, addr 0x25ec2d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_Principals, addr 0x25ec710, size 0x8, virtual false, abstract: false, final false
  inline void set_Principals(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* value);

  /// @brief Method set_Resources, addr 0x25ec458, size 0x8, virtual false, abstract: false, final false
  inline void set_Resources(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Statement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Statement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Statement(Statement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Statement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Statement(Statement const&) = delete;

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field effect, offset: 0x18, size: 0x4, def value: None
  ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect ___effect;

  /// @brief Field principals, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* ___principals;

  /// @brief Field actions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* ___actions;

  /// @brief Field resources, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* ___resources;

  /// @brief Field conditions, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* ___conditions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Statement, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Statement, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Statement, ___effect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Statement, ___principals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Statement, ___actions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Statement, ___resources) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Statement, ___conditions) == 0x38, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect, "Amazon.Auth.AccessControlPolicy", "Statement/StatementEffect");
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Statement);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Statement*, "Amazon.Auth.AccessControlPolicy", "Statement");
