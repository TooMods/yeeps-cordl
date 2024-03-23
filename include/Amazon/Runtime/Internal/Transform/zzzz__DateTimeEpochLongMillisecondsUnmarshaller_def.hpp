#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DateTimeEpochLongMillisecondsUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
class XmlUnmarshallerContext;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class DateTimeEpochLongMillisecondsUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::DateTimeEpochLongMillisecondsUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::DateTimeEpochLongMillisecondsUnmarshaller*
class CORDL_TYPE DateTimeEpochLongMillisecondsUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  /// @brief Method GetInstance, addr 0x244d938, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* GetInstance();

  static inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x244da08, size 0xf4, virtual true, abstract: false, final true
  inline ::System::DateTime Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x244d9c0, size 0x48, virtual true, abstract: false, final true
  inline ::System::DateTime Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x244d8d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x244d8e0, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__DateTime___Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__DateTime___Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeEpochLongMillisecondsUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeEpochLongMillisecondsUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeEpochLongMillisecondsUnmarshaller(DateTimeEpochLongMillisecondsUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeEpochLongMillisecondsUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeEpochLongMillisecondsUnmarshaller(DateTimeEpochLongMillisecondsUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*, "Amazon.Runtime.Internal.Transform", "DateTimeEpochLongMillisecondsUnmarshaller");
