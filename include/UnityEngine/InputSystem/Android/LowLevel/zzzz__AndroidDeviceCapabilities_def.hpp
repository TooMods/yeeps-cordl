#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidInputSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidDeviceCapabilities)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidInputSource;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
class __AndroidDeviceCapabilities____c;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class __AndroidDeviceCapabilities____c;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidDeviceCapabilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// CS Name: ::AndroidDeviceCapabilities::<>c*
class CORDL_TYPE __AndroidDeviceCapabilities____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* __9__8_0;

  static inline ::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c* New_ctor();

  /// @brief Method <ToString>b__8_0, addr 0x1e012c8, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__8_0(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis i);

  /// @brief Method .ctor, addr 0x1e012c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AndroidDeviceCapabilities____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AndroidDeviceCapabilities____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AndroidDeviceCapabilities____c(__AndroidDeviceCapabilities____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AndroidDeviceCapabilities____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AndroidDeviceCapabilities____c(__AndroidDeviceCapabilities____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidDeviceCapabilities
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidDeviceCapabilities
struct CORDL_TYPE AndroidDeviceCapabilities {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c;

  /// @brief Method FromJson, addr 0x1e00c8c, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities FromJson(::StringW json);

  /// @brief Method ToJson, addr 0x1e00e80, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToString, addr 0x1e00eec, size 0x370, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidDeviceCapabilities();

  // Ctor Parameters [CppParam { name: "deviceDescriptor", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "vendorId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isVirtual", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "motionAxes", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*>", modifiers: "", def_value: None }, CppParam { name:
  // "inputSources", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource", modifiers: "", def_value: None }]
  constexpr AndroidDeviceCapabilities(::StringW deviceDescriptor, int32_t productId, int32_t vendorId, bool isVirtual,
                                      ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*> motionAxes,
                                      ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources) noexcept;

  /// @brief Field deviceDescriptor, offset: 0x0, size: 0x8, def value: None
  ::StringW deviceDescriptor;

  /// @brief Field productId, offset: 0x8, size: 0x4, def value: None
  int32_t productId;

  /// @brief Field vendorId, offset: 0xc, size: 0x4, def value: None
  int32_t vendorId;

  /// @brief Field isVirtual, offset: 0x10, size: 0x1, def value: None
  bool isVirtual;

  /// @brief Field motionAxes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*> motionAxes;

  /// @brief Field inputSources, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, deviceDescriptor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, productId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, vendorId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, isVirtual) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, motionAxes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, inputSources) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities");
