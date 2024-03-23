#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetLayerVersionPolicyRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetLayerVersionPolicyRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetLayerVersionPolicyRequest);
// Type: Amazon.Lambda.Model::GetLayerVersionPolicyRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetLayerVersionPolicyRequest*
class CORDL_TYPE GetLayerVersionPolicyRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_LayerName, put = set_LayerName))::StringW LayerName;

  __declspec(property(get = get_VersionNumber, put = set_VersionNumber)) int64_t VersionNumber;

  /// @brief Field _layerName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__layerName, put = __cordl_internal_set__layerName))::StringW _layerName;

  /// @brief Field _versionNumber, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__versionNumber, put = __cordl_internal_set__versionNumber))::System::Nullable_1<int64_t> _versionNumber;

  /// @brief Method IsSetLayerName, addr 0x2bcbab4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerName();

  /// @brief Method IsSetVersionNumber, addr 0x2bcbb70, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetVersionNumber();

  static inline ::Amazon::Lambda::Model::GetLayerVersionPolicyRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__layerName() const;

  constexpr ::StringW& __cordl_internal_get__layerName();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__versionNumber() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__versionNumber();

  constexpr void __cordl_internal_set__layerName(::StringW value);

  constexpr void __cordl_internal_set__versionNumber(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x2bcbbac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LayerName, addr 0x2bcbaa4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerName();

  /// @brief Method get_VersionNumber, addr 0x2bcbac4, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_VersionNumber();

  /// @brief Method set_LayerName, addr 0x2bcbaac, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerName(::StringW value);

  /// @brief Method set_VersionNumber, addr 0x2bcbb00, size 0x70, virtual false, abstract: false, final false
  inline void set_VersionNumber(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetLayerVersionPolicyRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetLayerVersionPolicyRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetLayerVersionPolicyRequest(GetLayerVersionPolicyRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetLayerVersionPolicyRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetLayerVersionPolicyRequest(GetLayerVersionPolicyRequest const&) = delete;

  /// @brief Field _layerName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____layerName;

  /// @brief Field _versionNumber, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____versionNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetLayerVersionPolicyRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetLayerVersionPolicyRequest, ____layerName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetLayerVersionPolicyRequest, ____versionNumber) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetLayerVersionPolicyRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetLayerVersionPolicyRequest*, "Amazon.Lambda.Model", "GetLayerVersionPolicyRequest");
