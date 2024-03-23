#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetEventSourceMappingRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetEventSourceMappingRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetEventSourceMappingRequest);
// Type: Amazon.Lambda.Model::GetEventSourceMappingRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetEventSourceMappingRequest*
class CORDL_TYPE GetEventSourceMappingRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_UUID, put = set_UUID))::StringW UUID;

  /// @brief Field _uuid, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__uuid, put = __cordl_internal_set__uuid))::StringW _uuid;

  /// @brief Method IsSetUUID, addr 0x2bc9c20, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUUID();

  static inline ::Amazon::Lambda::Model::GetEventSourceMappingRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__uuid() const;

  constexpr ::StringW& __cordl_internal_get__uuid();

  constexpr void __cordl_internal_set__uuid(::StringW value);

  /// @brief Method .ctor, addr 0x2bc9c30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UUID, addr 0x2bc9c10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UUID();

  /// @brief Method set_UUID, addr 0x2bc9c18, size 0x8, virtual false, abstract: false, final false
  inline void set_UUID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetEventSourceMappingRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetEventSourceMappingRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetEventSourceMappingRequest(GetEventSourceMappingRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetEventSourceMappingRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetEventSourceMappingRequest(GetEventSourceMappingRequest const&) = delete;

  /// @brief Field _uuid, offset: 0x38, size: 0x8, def value: None
  ::StringW ____uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetEventSourceMappingRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingRequest, ____uuid) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetEventSourceMappingRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetEventSourceMappingRequest*, "Amazon.Lambda.Model", "GetEventSourceMappingRequest");
