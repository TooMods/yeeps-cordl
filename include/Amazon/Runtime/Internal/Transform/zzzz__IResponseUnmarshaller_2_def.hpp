#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IResponseUnmarshaller_2)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime {
class AmazonServiceException;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IResponseUnmarshaller_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2);
// Type: Amazon.Runtime.Internal.Transform::IResponseUnmarshaller`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// cpp template
template <typename T, typename R>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::IResponseUnmarshaller`2<T,R>*
class CORDL_TYPE IResponseUnmarshaller_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T,R>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T, R>*() noexcept;

  /// @brief Method UnmarshallException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(R input, ::System::Exception* innerException, ::System::Net::HttpStatusCode statusCode);

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T,R>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T, R>* i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2_T_R_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IResponseUnmarshaller_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IResponseUnmarshaller_2(IResponseUnmarshaller_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IResponseUnmarshaller_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResponseUnmarshaller_2(IResponseUnmarshaller_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2, "Amazon.Runtime.Internal.Transform", "IResponseUnmarshaller`2");
