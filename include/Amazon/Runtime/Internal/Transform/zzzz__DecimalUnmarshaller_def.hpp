#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DecimalUnmarshaller)
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
struct Decimal;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class DecimalUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::DecimalUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::DecimalUnmarshaller*
class CORDL_TYPE DecimalUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  /// @brief Method GetInstance, addr 0x244ccd0, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* GetInstance();

  static inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x244cda0, size 0x48, virtual true, abstract: false, final true
  inline ::System::Decimal Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x244cd58, size 0x48, virtual true, abstract: false, final true
  inline ::System::Decimal Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x244cc70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x244cc78, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Decimal___Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Decimal___Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecimalUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalUnmarshaller(DecimalUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalUnmarshaller(DecimalUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*, "Amazon.Runtime.Internal.Transform", "DecimalUnmarshaller");
