#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonErrorResponseUnmarshaller)
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
namespace Amazon::Runtime::Internal::Transform {
class JsonErrorResponseUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::JsonErrorResponseUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::JsonErrorResponseUnmarshaller*
class CORDL_TYPE JsonErrorResponseUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller* instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Method GetInstance, addr 0x244a338, size 0x80, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller* GetInstance();

  /// @brief Method GetValuesFromJsonIfPossible, addr 0x244a0ac, size 0x1a0, virtual false, abstract: false, final false
  static inline void GetValuesFromJsonIfPossible(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context, ByRef<::StringW> type, ByRef<::StringW> message, ByRef<::StringW> code);

  static inline ::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller* New_ctor();

  /// @brief Method TryReadContext, addr 0x244a29c, size 0x9c, virtual false, abstract: false, final false
  static inline bool TryReadContext(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x24495ac, size 0x798, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::ErrorResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x244a3b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller* getStaticF_instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Runtime__Internal__ErrorResponse____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  static inline void setStaticF_instance(::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonErrorResponseUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonErrorResponseUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonErrorResponseUnmarshaller(JsonErrorResponseUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonErrorResponseUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonErrorResponseUnmarshaller(JsonErrorResponseUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::JsonErrorResponseUnmarshaller*, "Amazon.Runtime.Internal.Transform", "JsonErrorResponseUnmarshaller");
