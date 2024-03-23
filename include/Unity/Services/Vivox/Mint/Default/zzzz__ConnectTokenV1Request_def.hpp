#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Vivox/Mint/Default/zzzz__DefaultApiBaseRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectTokenV1Request)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Unity::Services::Authentication::Internal {
class IAccessToken;
}
namespace Unity::Services::Vivox::Mint {
class Configuration;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Default {
class ConnectTokenV1Request;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request);
// Type: Unity.Services.Vivox.Mint.Default::ConnectTokenV1Request
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Default {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Default::ConnectTokenV1Request*
class CORDL_TYPE ConnectTokenV1Request : public ::Unity::Services::Vivox::Mint::Default::DefaultApiBaseRequest {
public:
  // Declarations
  __declspec(property(get = get_EnvironmentId))::StringW EnvironmentId;

  /// @brief Field PathAndQueryParams, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PathAndQueryParams, put = __cordl_internal_set_PathAndQueryParams))::StringW PathAndQueryParams;

  __declspec(property(get = get_PlayerId))::StringW PlayerId;

  __declspec(property(get = get_ProjectId))::StringW ProjectId;

  /// @brief Field <EnvironmentId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__EnvironmentId_k__BackingField, put = __cordl_internal_set__EnvironmentId_k__BackingField))::StringW _EnvironmentId_k__BackingField;

  /// @brief Field <PlayerId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__PlayerId_k__BackingField, put = __cordl_internal_set__PlayerId_k__BackingField))::StringW _PlayerId_k__BackingField;

  /// @brief Field <ProjectId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ProjectId_k__BackingField, put = __cordl_internal_set__ProjectId_k__BackingField))::StringW _ProjectId_k__BackingField;

  /// @brief Method ConstructBody, addr 0x1709124, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConstructBody();

  /// @brief Method ConstructHeaders, addr 0x170912c, size 0x704, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ConstructHeaders(::Unity::Services::Authentication::Internal::IAccessToken* accessToken,
                                                                                              ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration);

  /// @brief Method ConstructUrl, addr 0x1709110, size 0x14, virtual false, abstract: false, final false
  inline ::StringW ConstructUrl(::StringW requestBasePath);

  static inline ::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* New_ctor(::StringW environmentId, ::StringW projectId, ::StringW playerId);

  constexpr ::StringW const& __cordl_internal_get_PathAndQueryParams() const;

  constexpr ::StringW& __cordl_internal_get_PathAndQueryParams();

  constexpr ::StringW const& __cordl_internal_get__EnvironmentId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__EnvironmentId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PlayerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PlayerId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ProjectId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProjectId_k__BackingField();

  constexpr void __cordl_internal_set_PathAndQueryParams(::StringW value);

  constexpr void __cordl_internal_set__EnvironmentId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__PlayerId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProjectId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1708ed0, size 0x240, virtual false, abstract: false, final false
  inline void _ctor(::StringW environmentId, ::StringW projectId, ::StringW playerId);

  /// @brief Method get_EnvironmentId, addr 0x1708eb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EnvironmentId();

  /// @brief Method get_PlayerId, addr 0x1708ec8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PlayerId();

  /// @brief Method get_ProjectId, addr 0x1708ec0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProjectId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectTokenV1Request();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectTokenV1Request", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectTokenV1Request(ConnectTokenV1Request&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectTokenV1Request", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectTokenV1Request(ConnectTokenV1Request const&) = delete;

  /// @brief Field <EnvironmentId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____EnvironmentId_k__BackingField;

  /// @brief Field <ProjectId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ProjectId_k__BackingField;

  /// @brief Field <PlayerId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____PlayerId_k__BackingField;

  /// @brief Field PathAndQueryParams, offset: 0x28, size: 0x8, def value: None
  ::StringW ___PathAndQueryParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request, ____EnvironmentId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request, ____ProjectId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request, ____PlayerId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request, ___PathAndQueryParams) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Default
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request*, "Unity.Services.Vivox.Mint.Default", "ConnectTokenV1Request");
