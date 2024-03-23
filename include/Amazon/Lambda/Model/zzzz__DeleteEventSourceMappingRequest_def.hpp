#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeleteEventSourceMappingRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class DeleteEventSourceMappingRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::DeleteEventSourceMappingRequest);
// Type: Amazon.Lambda.Model::DeleteEventSourceMappingRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::DeleteEventSourceMappingRequest*
class CORDL_TYPE DeleteEventSourceMappingRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_UUID, put = set_UUID))::StringW UUID;

  /// @brief Field _uuid, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__uuid, put = __cordl_internal_set__uuid))::StringW _uuid;

  /// @brief Method IsSetUUID, addr 0x2bc6cfc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUUID();

  static inline ::Amazon::Lambda::Model::DeleteEventSourceMappingRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__uuid() const;

  constexpr ::StringW& __cordl_internal_get__uuid();

  constexpr void __cordl_internal_set__uuid(::StringW value);

  /// @brief Method .ctor, addr 0x2bc6d0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UUID, addr 0x2bc6cec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UUID();

  /// @brief Method set_UUID, addr 0x2bc6cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_UUID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteEventSourceMappingRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteEventSourceMappingRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteEventSourceMappingRequest(DeleteEventSourceMappingRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteEventSourceMappingRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteEventSourceMappingRequest(DeleteEventSourceMappingRequest const&) = delete;

  /// @brief Field _uuid, offset: 0x38, size: 0x8, def value: None
  ::StringW ____uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::DeleteEventSourceMappingRequest, ____uuid) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::DeleteEventSourceMappingRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*, "Amazon.Lambda.Model", "DeleteEventSourceMappingRequest");
