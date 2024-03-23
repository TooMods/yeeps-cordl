#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Principal)
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
class Principal;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Principal);
// Type: Amazon.Auth.AccessControlPolicy::Principal
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::Principal*
class CORDL_TYPE Principal : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllUsers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllUsers, put = setStaticF_AllUsers))::Amazon::Auth::AccessControlPolicy::Principal* AllUsers;

  /// @brief Field Anonymous, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Anonymous, put = setStaticF_Anonymous))::Amazon::Auth::AccessControlPolicy::Principal* Anonymous;

  __declspec(property(get = get_Id))::StringW Id;

  __declspec(property(get = get_Provider, put = set_Provider))::StringW Provider;

  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field provider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_provider, put = __cordl_internal_set_provider))::StringW provider;

  static inline ::Amazon::Auth::AccessControlPolicy::Principal* New_ctor(::StringW accountId);

  static inline ::Amazon::Auth::AccessControlPolicy::Principal* New_ctor(::StringW provider, ::StringW id);

  static inline ::Amazon::Auth::AccessControlPolicy::Principal* New_ctor(::StringW provider, ::StringW id, bool stripHyphen);

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::StringW const& __cordl_internal_get_provider() const;

  constexpr ::StringW& __cordl_internal_get_provider();

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_provider(::StringW value);

  /// @brief Method .ctor, addr 0x25ebac0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW accountId);

  /// @brief Method .ctor, addr 0x25ebb6c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW provider, ::StringW id);

  /// @brief Method .ctor, addr 0x25ebbdc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW provider, ::StringW id, bool stripHyphen);

  static inline ::Amazon::Auth::AccessControlPolicy::Principal* getStaticF_AllUsers();

  static inline ::Amazon::Auth::AccessControlPolicy::Principal* getStaticF_Anonymous();

  /// @brief Method get_Id, addr 0x25ebc8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_Provider, addr 0x25ebc7c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Provider();

  static inline void setStaticF_AllUsers(::Amazon::Auth::AccessControlPolicy::Principal* value);

  static inline void setStaticF_Anonymous(::Amazon::Auth::AccessControlPolicy::Principal* value);

  /// @brief Method set_Provider, addr 0x25ebc84, size 0x8, virtual false, abstract: false, final false
  inline void set_Provider(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Principal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Principal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Principal(Principal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Principal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Principal(Principal const&) = delete;

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field provider, offset: 0x18, size: 0x8, def value: None
  ::StringW ___provider;

  /// @brief Field ANONYMOUS_PROVIDER offset 0xffffffff size 0x8
  static constexpr ::ConstString ANONYMOUS_PROVIDER{ u"__ANONYMOUS__" };

  /// @brief Field AWS_PROVIDER offset 0xffffffff size 0x8
  static constexpr ::ConstString AWS_PROVIDER{ u"AWS" };

  /// @brief Field CANONICAL_USER_PROVIDER offset 0xffffffff size 0x8
  static constexpr ::ConstString CANONICAL_USER_PROVIDER{ u"CanonicalUser" };

  /// @brief Field FEDERATED_PROVIDER offset 0xffffffff size 0x8
  static constexpr ::ConstString FEDERATED_PROVIDER{ u"Federated" };

  /// @brief Field SERVICE_PROVIDER offset 0xffffffff size 0x8
  static constexpr ::ConstString SERVICE_PROVIDER{ u"Service" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Principal, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Principal, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Principal, ___provider) == 0x18, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Principal);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Principal*, "Amazon.Auth.AccessControlPolicy", "Principal");
