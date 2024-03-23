#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller)
namespace Amazon::Lambda::Model {
class ProvisionedConcurrencyConfigNotFoundException;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename TUnmarshaller, typename TUnmarshalleContext> class IErrorResponseUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal {
class ErrorResponse;
}
// Forward declare root types
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
class ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller);
// Type: Amazon.Lambda.Model.Internal.MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model.Internal.MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller*
class CORDL_TYPE ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,
                                                                                          ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,
                                                                             ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x2b9e5b8, size 0x64, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x2b9e61c, size 0x194, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context,
                                                                                            ::Amazon::Runtime::Internal::ErrorResponse* errorResponse);

  /// @brief Method .ctor, addr 0x2b9e808, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x2b9e7b0, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller* get_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,
                                                                                 ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IErrorResponseUnmarshaller_2___Amazon__Lambda__Model__ProvisionedConcurrencyConfigNotFoundException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*,
                                                                    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Lambda__Model__ProvisionedConcurrencyConfigNotFoundException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller(ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller(ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Internal::MarshallTransformations::ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller*, "Amazon.Lambda.Model.Internal.MarshallTransformations",
                       "ProvisionedConcurrencyConfigNotFoundExceptionUnmarshaller");
