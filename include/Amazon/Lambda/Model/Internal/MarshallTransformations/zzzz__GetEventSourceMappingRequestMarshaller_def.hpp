#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GetEventSourceMappingRequestMarshaller)
namespace Amazon::Lambda::Model {
class GetEventSourceMappingRequest;
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
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
class GetEventSourceMappingRequestMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller);
// Type: Amazon.Lambda.Model.Internal.MarshallTransformations::GetEventSourceMappingRequestMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model.Internal.MarshallTransformations::GetEventSourceMappingRequestMarshaller*
class CORDL_TYPE GetEventSourceMappingRequestMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::GetEventSourceMappingRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::GetEventSourceMappingRequest*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept;

  /// @brief Method GetInstance, addr 0x2ec5ea8, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller* GetInstance();

  /// @brief Method Marshall, addr 0x2ec5a70, size 0x7c, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input);

  /// @brief Method Marshall, addr 0x2ec5aec, size 0x3bc, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::Lambda::Model::GetEventSourceMappingRequest* publicRequest);

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x2ec5f58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x2ec5f00, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::GetEventSourceMappingRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::GetEventSourceMappingRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Lambda__Model__GetEventSourceMappingRequest__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Runtime__AmazonWebServiceRequest__() noexcept;

  static inline void setStaticF__instance(::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetEventSourceMappingRequestMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetEventSourceMappingRequestMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetEventSourceMappingRequestMarshaller(GetEventSourceMappingRequestMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetEventSourceMappingRequestMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetEventSourceMappingRequestMarshaller(GetEventSourceMappingRequestMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Internal::MarshallTransformations::GetEventSourceMappingRequestMarshaller*, "Amazon.Lambda.Model.Internal.MarshallTransformations",
                       "GetEventSourceMappingRequestMarshaller");
