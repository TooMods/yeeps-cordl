#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(UpdateTimeToLiveResponse)
namespace Amazon::DynamoDBv2::Model {
class TimeToLiveSpecification;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateTimeToLiveResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse);
// Type: Amazon.DynamoDBv2.Model::UpdateTimeToLiveResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateTimeToLiveResponse*
class CORDL_TYPE UpdateTimeToLiveResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_TimeToLiveSpecification, put = set_TimeToLiveSpecification))::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* TimeToLiveSpecification;

  /// @brief Field _timeToLiveSpecification, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__timeToLiveSpecification,
                      put = __cordl_internal_set__timeToLiveSpecification))::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* _timeToLiveSpecification;

  /// @brief Method IsSetTimeToLiveSpecification, addr 0x1055894, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTimeToLiveSpecification();

  static inline ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*& __cordl_internal_get__timeToLiveSpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*> const& __cordl_internal_get__timeToLiveSpecification() const;

  constexpr void __cordl_internal_set__timeToLiveSpecification(::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* value);

  /// @brief Method .ctor, addr 0x10558a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TimeToLiveSpecification, addr 0x1055884, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* get_TimeToLiveSpecification();

  /// @brief Method set_TimeToLiveSpecification, addr 0x105588c, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeToLiveSpecification(::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateTimeToLiveResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateTimeToLiveResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateTimeToLiveResponse(UpdateTimeToLiveResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateTimeToLiveResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateTimeToLiveResponse(UpdateTimeToLiveResponse const&) = delete;

  /// @brief Field _timeToLiveSpecification, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* ____timeToLiveSpecification;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse, ____timeToLiveSpecification) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*, "Amazon.DynamoDBv2.Model", "UpdateTimeToLiveResponse");
