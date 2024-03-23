#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(DescribeContinuousBackupsResponse)
namespace Amazon::DynamoDBv2::Model {
class ContinuousBackupsDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeContinuousBackupsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeContinuousBackupsResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeContinuousBackupsResponse*
class CORDL_TYPE DescribeContinuousBackupsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ContinuousBackupsDescription, put = set_ContinuousBackupsDescription))::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* ContinuousBackupsDescription;

  /// @brief Field _continuousBackupsDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__continuousBackupsDescription,
                      put = __cordl_internal_set__continuousBackupsDescription))::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* _continuousBackupsDescription;

  /// @brief Method IsSetContinuousBackupsDescription, addr 0x1229c50, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetContinuousBackupsDescription();

  static inline ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*& __cordl_internal_get__continuousBackupsDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*> const& __cordl_internal_get__continuousBackupsDescription() const;

  constexpr void __cordl_internal_set__continuousBackupsDescription(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* value);

  /// @brief Method .ctor, addr 0x1229c60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContinuousBackupsDescription, addr 0x1229c40, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* get_ContinuousBackupsDescription();

  /// @brief Method set_ContinuousBackupsDescription, addr 0x1229c48, size 0x8, virtual false, abstract: false, final false
  inline void set_ContinuousBackupsDescription(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeContinuousBackupsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeContinuousBackupsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeContinuousBackupsResponse(DescribeContinuousBackupsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeContinuousBackupsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeContinuousBackupsResponse(DescribeContinuousBackupsResponse const&) = delete;

  /// @brief Field _continuousBackupsDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* ____continuousBackupsDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse, ____continuousBackupsDescription) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*, "Amazon.DynamoDBv2.Model", "DescribeContinuousBackupsResponse");
