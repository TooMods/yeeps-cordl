#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FunctionCodeLocation)
// Forward declare root types
namespace Amazon::Lambda::Model {
class FunctionCodeLocation;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::FunctionCodeLocation);
// Type: Amazon.Lambda.Model::FunctionCodeLocation
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::FunctionCodeLocation*
class CORDL_TYPE FunctionCodeLocation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ImageUri, put = set_ImageUri))::StringW ImageUri;

  __declspec(property(get = get_Location, put = set_Location))::StringW Location;

  __declspec(property(get = get_RepositoryType, put = set_RepositoryType))::StringW RepositoryType;

  __declspec(property(get = get_ResolvedImageUri, put = set_ResolvedImageUri))::StringW ResolvedImageUri;

  /// @brief Field _imageUri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__imageUri, put = __cordl_internal_set__imageUri))::StringW _imageUri;

  /// @brief Field _location, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__location, put = __cordl_internal_set__location))::StringW _location;

  /// @brief Field _repositoryType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__repositoryType, put = __cordl_internal_set__repositoryType))::StringW _repositoryType;

  /// @brief Field _resolvedImageUri, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__resolvedImageUri, put = __cordl_internal_set__resolvedImageUri))::StringW _resolvedImageUri;

  /// @brief Method IsSetImageUri, addr 0x2bc8da8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetImageUri();

  /// @brief Method IsSetLocation, addr 0x2bc8dc8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLocation();

  /// @brief Method IsSetRepositoryType, addr 0x2bc8de8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRepositoryType();

  /// @brief Method IsSetResolvedImageUri, addr 0x2bc8e08, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetResolvedImageUri();

  static inline ::Amazon::Lambda::Model::FunctionCodeLocation* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__imageUri() const;

  constexpr ::StringW& __cordl_internal_get__imageUri();

  constexpr ::StringW const& __cordl_internal_get__location() const;

  constexpr ::StringW& __cordl_internal_get__location();

  constexpr ::StringW const& __cordl_internal_get__repositoryType() const;

  constexpr ::StringW& __cordl_internal_get__repositoryType();

  constexpr ::StringW const& __cordl_internal_get__resolvedImageUri() const;

  constexpr ::StringW& __cordl_internal_get__resolvedImageUri();

  constexpr void __cordl_internal_set__imageUri(::StringW value);

  constexpr void __cordl_internal_set__location(::StringW value);

  constexpr void __cordl_internal_set__repositoryType(::StringW value);

  constexpr void __cordl_internal_set__resolvedImageUri(::StringW value);

  /// @brief Method .ctor, addr 0x2bc8e18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ImageUri, addr 0x2bc8d98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ImageUri();

  /// @brief Method get_Location, addr 0x2bc8db8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_RepositoryType, addr 0x2bc8dd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RepositoryType();

  /// @brief Method get_ResolvedImageUri, addr 0x2bc8df8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ResolvedImageUri();

  /// @brief Method set_ImageUri, addr 0x2bc8da0, size 0x8, virtual false, abstract: false, final false
  inline void set_ImageUri(::StringW value);

  /// @brief Method set_Location, addr 0x2bc8dc0, size 0x8, virtual false, abstract: false, final false
  inline void set_Location(::StringW value);

  /// @brief Method set_RepositoryType, addr 0x2bc8de0, size 0x8, virtual false, abstract: false, final false
  inline void set_RepositoryType(::StringW value);

  /// @brief Method set_ResolvedImageUri, addr 0x2bc8e00, size 0x8, virtual false, abstract: false, final false
  inline void set_ResolvedImageUri(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FunctionCodeLocation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FunctionCodeLocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FunctionCodeLocation(FunctionCodeLocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FunctionCodeLocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FunctionCodeLocation(FunctionCodeLocation const&) = delete;

  /// @brief Field _imageUri, offset: 0x10, size: 0x8, def value: None
  ::StringW ____imageUri;

  /// @brief Field _location, offset: 0x18, size: 0x8, def value: None
  ::StringW ____location;

  /// @brief Field _repositoryType, offset: 0x20, size: 0x8, def value: None
  ::StringW ____repositoryType;

  /// @brief Field _resolvedImageUri, offset: 0x28, size: 0x8, def value: None
  ::StringW ____resolvedImageUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::FunctionCodeLocation, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::FunctionCodeLocation, ____imageUri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::FunctionCodeLocation, ____location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::FunctionCodeLocation, ____repositoryType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::FunctionCodeLocation, ____resolvedImageUri) == 0x28, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::FunctionCodeLocation);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::FunctionCodeLocation*, "Amazon.Lambda.Model", "FunctionCodeLocation");
