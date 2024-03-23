#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Policy)
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
class Statement;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass18_0;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass19_0;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass20_0;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass21_0;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
class Policy;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass18_0;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass19_0;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass20_0;
}
namespace Amazon::Auth::AccessControlPolicy {
class __Policy____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Policy);
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass18_0);
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass19_0);
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass20_0);
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Policy::<>c__DisplayClass18_0*
class CORDL_TYPE __Policy____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resource, put = __cordl_internal_set_resource))::Amazon::Auth::AccessControlPolicy::Resource* resource;

  static inline ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass18_0* New_ctor();

  /// @brief Method <StatementContainsResources>b__0, addr 0x25eb92c, size 0x28, virtual false, abstract: false, final false
  inline bool _StatementContainsResources_b__0(::Amazon::Auth::AccessControlPolicy::Resource* x);

  constexpr ::Amazon::Auth::AccessControlPolicy::Resource*& __cordl_internal_get_resource();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Auth::AccessControlPolicy::Resource*> const& __cordl_internal_get_resource() const;

  constexpr void __cordl_internal_set_resource(::Amazon::Auth::AccessControlPolicy::Resource* value);

  /// @brief Method .ctor, addr 0x25eb080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Policy____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Policy____c__DisplayClass18_0(__Policy____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Policy____c__DisplayClass18_0(__Policy____c__DisplayClass18_0 const&) = delete;

  /// @brief Field resource, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Auth::AccessControlPolicy::Resource* ___resource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass18_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass18_0, ___resource) == 0x10, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Policy::<>c__DisplayClass19_0*
class CORDL_TYPE __Policy____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* action;

  static inline ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass19_0* New_ctor();

  /// @brief Method <StatementContainsActions>b__0, addr 0x25eb954, size 0x28, virtual false, abstract: false, final false
  inline bool _StatementContainsActions_b__0(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* x);

  constexpr ::Amazon::Auth::AccessControlPolicy::ActionIdentifier*& __cordl_internal_get_action();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*> const& __cordl_internal_get_action() const;

  constexpr void __cordl_internal_set_action(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  /// @brief Method .ctor, addr 0x25eb088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Policy____c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Policy____c__DisplayClass19_0(__Policy____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Policy____c__DisplayClass19_0(__Policy____c__DisplayClass19_0 const&) = delete;

  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass19_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass19_0, ___action) == 0x10, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Policy::<>c__DisplayClass20_0*
class CORDL_TYPE __Policy____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field condition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_condition, put = __cordl_internal_set_condition))::Amazon::Auth::AccessControlPolicy::Condition* condition;

  static inline ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass20_0* New_ctor();

  /// @brief Method <StatementContainsConditions>b__0, addr 0x25eb97c, size 0xe0, virtual false, abstract: false, final false
  inline bool _StatementContainsConditions_b__0(::Amazon::Auth::AccessControlPolicy::Condition* x);

  constexpr ::Amazon::Auth::AccessControlPolicy::Condition*& __cordl_internal_get_condition();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Auth::AccessControlPolicy::Condition*> const& __cordl_internal_get_condition() const;

  constexpr void __cordl_internal_set_condition(::Amazon::Auth::AccessControlPolicy::Condition* value);

  /// @brief Method .ctor, addr 0x25eb090, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Policy____c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Policy____c__DisplayClass20_0(__Policy____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Policy____c__DisplayClass20_0(__Policy____c__DisplayClass20_0 const&) = delete;

  /// @brief Field condition, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Auth::AccessControlPolicy::Condition* ___condition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass20_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass20_0, ___condition) == 0x10, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Policy::<>c__DisplayClass21_0*
class CORDL_TYPE __Policy____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field principal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_principal, put = __cordl_internal_set_principal))::Amazon::Auth::AccessControlPolicy::Principal* principal;

  static inline ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass21_0* New_ctor();

  /// @brief Method <StatementContainsPrincipals>b__0, addr 0x25eba5c, size 0x64, virtual false, abstract: false, final false
  inline bool _StatementContainsPrincipals_b__0(::Amazon::Auth::AccessControlPolicy::Principal* x);

  constexpr ::Amazon::Auth::AccessControlPolicy::Principal*& __cordl_internal_get_principal();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Auth::AccessControlPolicy::Principal*> const& __cordl_internal_get_principal() const;

  constexpr void __cordl_internal_set_principal(::Amazon::Auth::AccessControlPolicy::Principal* value);

  /// @brief Method .ctor, addr 0x25eb098, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Policy____c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Policy____c__DisplayClass21_0(__Policy____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Policy____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Policy____c__DisplayClass21_0(__Policy____c__DisplayClass21_0 const&) = delete;

  /// @brief Field principal, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Auth::AccessControlPolicy::Principal* ___principal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass21_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass21_0, ___principal) == 0x10, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: Amazon.Auth.AccessControlPolicy::Policy
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::Policy*
class CORDL_TYPE Policy : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass18_0;

  using __c__DisplayClass19_0 = ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass19_0;

  using __c__DisplayClass20_0 = ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass20_0;

  using __c__DisplayClass21_0 = ::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass21_0;

  __declspec(property(get = get_Id, put = set_Id))::StringW Id;

  __declspec(property(get = get_Statements, put = set_Statements))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* Statements;

  __declspec(property(get = get_Version, put = set_Version))::StringW Version;

  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field statements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_statements,
                      put = __cordl_internal_set_statements))::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* statements;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  /// @brief Method CheckIfStatementExists, addr 0x25e9db0, size 0x380, virtual false, abstract: false, final false
  inline bool CheckIfStatementExists(::Amazon::Auth::AccessControlPolicy::Statement* statement);

  /// @brief Method FromJson, addr 0x25eb470, size 0x4, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Policy* FromJson(::StringW json);

  static inline ::Amazon::Auth::AccessControlPolicy::Policy* New_ctor();

  static inline ::Amazon::Auth::AccessControlPolicy::Policy* New_ctor(::StringW id);

  static inline ::Amazon::Auth::AccessControlPolicy::Policy* New_ctor(::StringW id, ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* statements);

  /// @brief Method StatementContainsActions, addr 0x25ea504, size 0x3d4, virtual false, abstract: false, final false
  static inline bool StatementContainsActions(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                              ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* actions);

  /// @brief Method StatementContainsConditions, addr 0x25ea8d8, size 0x3d4, virtual false, abstract: false, final false
  static inline bool StatementContainsConditions(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                 ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* conditions);

  /// @brief Method StatementContainsPrincipals, addr 0x25eacac, size 0x3d4, virtual false, abstract: false, final false
  static inline bool StatementContainsPrincipals(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                 ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* principals);

  /// @brief Method StatementContainsResources, addr 0x25ea130, size 0x3d4, virtual false, abstract: false, final false
  static inline bool StatementContainsResources(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* resources);

  /// @brief Method ToJson, addr 0x25eb1ec, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToJson, addr 0x25eb1f8, size 0x10, virtual false, abstract: false, final false
  inline ::StringW ToJson(bool prettyPrint);

  /// @brief Method WithId, addr 0x25e9d88, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::Policy* WithId(::StringW id);

  /// @brief Method WithStatements, addr 0x25eb0a0, size 0x14c, virtual false, abstract: false, final false
  inline ::Amazon::Auth::AccessControlPolicy::Policy* WithStatements(::ArrayW<::Amazon::Auth::AccessControlPolicy::Statement*, ::Array<::Amazon::Auth::AccessControlPolicy::Statement*>*> statements);

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>*& __cordl_internal_get_statements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>*> const& __cordl_internal_get_statements() const;

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_statements(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x25e9b70, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25e9c10, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method .ctor, addr 0x25e9cbc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* statements);

  /// @brief Method get_Id, addr 0x25e9d78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_Statements, addr 0x25e9da0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* get_Statements();

  /// @brief Method get_Version, addr 0x25e9d90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Version();

  /// @brief Method set_Id, addr 0x25e9d80, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_Statements, addr 0x25e9da8, size 0x8, virtual false, abstract: false, final false
  inline void set_Statements(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* value);

  /// @brief Method set_Version, addr 0x25e9d98, size 0x8, virtual false, abstract: false, final false
  inline void set_Version(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Policy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Policy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Policy(Policy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Policy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Policy(Policy const&) = delete;

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field statements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Statement*>* ___statements;

  /// @brief Field DEFAULT_POLICY_VERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_POLICY_VERSION{ u"2012-10-17" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Policy, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Policy, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Policy, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Policy, ___statements) == 0x20, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Policy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Policy*, "Amazon.Auth.AccessControlPolicy", "Policy");
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass18_0*, "Amazon.Auth.AccessControlPolicy", "Policy/<>c__DisplayClass18_0");
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass19_0*, "Amazon.Auth.AccessControlPolicy", "Policy/<>c__DisplayClass19_0");
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass20_0*, "Amazon.Auth.AccessControlPolicy", "Policy/<>c__DisplayClass20_0");
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__Policy____c__DisplayClass21_0*, "Amazon.Auth.AccessControlPolicy", "Policy/<>c__DisplayClass21_0");
