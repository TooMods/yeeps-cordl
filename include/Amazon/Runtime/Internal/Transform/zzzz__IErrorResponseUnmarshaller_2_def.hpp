#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IErrorResponseUnmarshaller_2)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal {
class ErrorResponse;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
template <typename TUnmarshaller, typename TUnmarshalleContext> class IErrorResponseUnmarshaller_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2);
// Type: Amazon.Runtime.Internal.Transform::IErrorResponseUnmarshaller`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// cpp template
template <typename TUnmarshaller, typename TUnmarshalleContext>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::IErrorResponseUnmarshaller`2<TUnmarshaller,TUnmarshalleContext>*
class CORDL_TYPE IErrorResponseUnmarshaller_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller,TUnmarshalleContext>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>*() noexcept;

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TUnmarshaller Unmarshall(TUnmarshalleContext input, ::Amazon::Runtime::Internal::ErrorResponse* errorResponse);

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller,TUnmarshalleContext>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2_TUnmarshaller_TUnmarshalleContext_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IErrorResponseUnmarshaller_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IErrorResponseUnmarshaller_2(IErrorResponseUnmarshaller_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IErrorResponseUnmarshaller_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IErrorResponseUnmarshaller_2(IErrorResponseUnmarshaller_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2, "Amazon.Runtime.Internal.Transform", "IErrorResponseUnmarshaller`2");
