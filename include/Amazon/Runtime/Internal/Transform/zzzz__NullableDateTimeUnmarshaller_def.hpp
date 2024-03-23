#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullableDateTimeUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class NullableDateTimeUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::NullableDateTimeUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::NullableDateTimeUnmarshaller*
class CORDL_TYPE NullableDateTimeUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Nullable_1<::System::DateTime>,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Nullable_1<::System::DateTime>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Method GetInstance, addr 0x244d764, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller* GetInstance();

  static inline ::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x244d7ec, size 0x88, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::System::DateTime> Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x244d704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x244d70c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Nullable_1<::System::DateTime>,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Nullable_1<::System::DateTime>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Nullable_1___System__DateTime____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableDateTimeUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableDateTimeUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableDateTimeUnmarshaller(NullableDateTimeUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableDateTimeUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableDateTimeUnmarshaller(NullableDateTimeUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::NullableDateTimeUnmarshaller*, "Amazon.Runtime.Internal.Transform", "NullableDateTimeUnmarshaller");
