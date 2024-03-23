#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetLayerVersionByArnRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetLayerVersionByArnRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetLayerVersionByArnRequest);
// Type: Amazon.Lambda.Model::GetLayerVersionByArnRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetLayerVersionByArnRequest*
class CORDL_TYPE GetLayerVersionByArnRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Arn, put = set_Arn))::StringW Arn;

  /// @brief Field _arn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__arn, put = __cordl_internal_set__arn))::StringW _arn;

  /// @brief Method IsSetArn, addr 0x2bcb804, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetArn();

  static inline ::Amazon::Lambda::Model::GetLayerVersionByArnRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__arn() const;

  constexpr ::StringW& __cordl_internal_get__arn();

  constexpr void __cordl_internal_set__arn(::StringW value);

  /// @brief Method .ctor, addr 0x2bcb814, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Arn, addr 0x2bcb7f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Arn();

  /// @brief Method set_Arn, addr 0x2bcb7fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Arn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetLayerVersionByArnRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetLayerVersionByArnRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetLayerVersionByArnRequest(GetLayerVersionByArnRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetLayerVersionByArnRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetLayerVersionByArnRequest(GetLayerVersionByArnRequest const&) = delete;

  /// @brief Field _arn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____arn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetLayerVersionByArnRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetLayerVersionByArnRequest, ____arn) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetLayerVersionByArnRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetLayerVersionByArnRequest*, "Amazon.Lambda.Model", "GetLayerVersionByArnRequest");
