#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DateTimeUnmarshaller)
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
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class DateTimeUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::DateTimeUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::DateTimeUnmarshaller*
class CORDL_TYPE DateTimeUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  /// @brief Method GetInstance, addr 0x244d328, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller* GetInstance();

  static inline ::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x244d5e0, size 0xc0, virtual true, abstract: false, final true
  inline ::System::DateTime Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x244d3b0, size 0xb0, virtual true, abstract: false, final true
  inline ::System::DateTime Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  /// @brief Method UnmarshallInternal, addr 0x244d460, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::DateTime> UnmarshallInternal(::StringW text, bool treatAsNullable);

  /// @brief Method .ctor, addr 0x244d2c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x244d2d0, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__DateTime___Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__DateTime___Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeUnmarshaller(DateTimeUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeUnmarshaller(DateTimeUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::DateTimeUnmarshaller*, "Amazon.Runtime.Internal.Transform", "DateTimeUnmarshaller");
