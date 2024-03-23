#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UpdateContributorInsightsRequestMarshaller)
namespace Amazon::DynamoDBv2::Model {
class UpdateContributorInsightsRequest;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IMarshaller_2;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
class UpdateContributorInsightsRequestMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::UpdateContributorInsightsRequestMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::UpdateContributorInsightsRequestMarshaller*
class CORDL_TYPE UpdateContributorInsightsRequestMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept;

  /// @brief Method GetInstance, addr 0x1739a10, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller* GetInstance();

  /// @brief Method Marshall, addr 0x17390d8, size 0x7c, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input);

  /// @brief Method Marshall, addr 0x1739154, size 0x8bc, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest* publicRequest);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x1739ac0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x1739a68, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__DynamoDBv2__Model__UpdateContributorInsightsRequest__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Runtime__AmazonWebServiceRequest__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateContributorInsightsRequestMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateContributorInsightsRequestMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateContributorInsightsRequestMarshaller(UpdateContributorInsightsRequestMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateContributorInsightsRequestMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateContributorInsightsRequestMarshaller(UpdateContributorInsightsRequestMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateContributorInsightsRequestMarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "UpdateContributorInsightsRequestMarshaller");
