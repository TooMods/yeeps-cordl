#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Resource)
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
class Resource;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Resource);
// Type: Amazon.Auth.AccessControlPolicy::Resource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::Resource*
class CORDL_TYPE Resource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Id))::StringW Id;

  /// @brief Field resource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resource, put = __cordl_internal_set_resource))::StringW resource;

  static inline ::Amazon::Auth::AccessControlPolicy::Resource* New_ctor(::StringW resource);

  constexpr ::StringW const& __cordl_internal_get_resource() const;

  constexpr ::StringW& __cordl_internal_get_resource();

  constexpr void __cordl_internal_set_resource(::StringW value);

  /// @brief Method .ctor, addr 0x25ebd48, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW resource);

  /// @brief Method get_Id, addr 0x25ebd70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Resource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Resource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Resource(Resource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Resource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Resource(Resource const&) = delete;

  /// @brief Field resource, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Resource, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::Resource, ___resource) == 0x10, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Resource);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Resource*, "Amazon.Auth.AccessControlPolicy", "Resource");
