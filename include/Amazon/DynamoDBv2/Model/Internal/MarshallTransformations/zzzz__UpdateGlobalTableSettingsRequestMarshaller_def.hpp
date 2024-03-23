#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UpdateGlobalTableSettingsRequestMarshaller)
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableSettingsRequest;
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
class UpdateGlobalTableSettingsRequestMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller*
class CORDL_TYPE UpdateGlobalTableSettingsRequestMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept;

  /// @brief Method GetInstance, addr 0x173cc94, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller* GetInstance();

  /// @brief Method Marshall, addr 0x173be4c, size 0x7c, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input);

  /// @brief Method Marshall, addr 0x173bec8, size 0xdcc, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest* publicRequest);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x173cd44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x173ccec, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__DynamoDBv2__Model__UpdateGlobalTableSettingsRequest__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Runtime__AmazonWebServiceRequest__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateGlobalTableSettingsRequestMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableSettingsRequestMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateGlobalTableSettingsRequestMarshaller(UpdateGlobalTableSettingsRequestMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableSettingsRequestMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateGlobalTableSettingsRequestMarshaller(UpdateGlobalTableSettingsRequestMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateGlobalTableSettingsRequestMarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "UpdateGlobalTableSettingsRequestMarshaller");
