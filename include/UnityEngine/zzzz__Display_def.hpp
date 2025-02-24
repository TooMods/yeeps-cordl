#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Display)
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class __Display__DisplaysUpdatedDelegate;
}
// Forward declare root types
namespace UnityEngine {
class Display;
}
namespace UnityEngine {
class __Display__DisplaysUpdatedDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Display);
MARK_REF_PTR_T(::UnityEngine::__Display__DisplaysUpdatedDelegate);
// Type: ::DisplaysUpdatedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Display::DisplaysUpdatedDelegate*
class CORDL_TYPE __Display__DisplaysUpdatedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x27f9ab8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::__Display__DisplaysUpdatedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f99fc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Display__DisplaysUpdatedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Display__DisplaysUpdatedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Display__DisplaysUpdatedDelegate(__Display__DisplaysUpdatedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Display__DisplaysUpdatedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Display__DisplaysUpdatedDelegate(__Display__DisplaysUpdatedDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Display__DisplaysUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Display
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Display*
class CORDL_TYPE Display : public ::System::Object {
public:
  // Declarations
  using DisplaysUpdatedDelegate = ::UnityEngine::__Display__DisplaysUpdatedDelegate;

  /// @brief Field _mainDisplay, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__mainDisplay, put = setStaticF__mainDisplay))::UnityEngine::Display* _mainDisplay;

  /// @brief Field displays, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_displays, put = setStaticF_displays))::ArrayW<::UnityEngine::Display*, ::Array<::UnityEngine::Display*>*> displays;

  /// @brief Field m_ActiveEditorGameViewTarget, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_ActiveEditorGameViewTarget, put = setStaticF_m_ActiveEditorGameViewTarget)) int32_t m_ActiveEditorGameViewTarget;

  /// @brief Field nativeDisplay, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeDisplay, put = __cordl_internal_set_nativeDisplay)) void* nativeDisplay;

  /// @brief Field onDisplaysUpdated, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onDisplaysUpdated, put = setStaticF_onDisplaysUpdated))::UnityEngine::__Display__DisplaysUpdatedDelegate* onDisplaysUpdated;

  __declspec(property(get = get_renderingHeight)) int32_t renderingHeight;

  __declspec(property(get = get_renderingWidth)) int32_t renderingWidth;

  __declspec(property(get = get_requiresSrgbBlitToBackbuffer)) bool requiresSrgbBlitToBackbuffer;

  __declspec(property(get = get_systemHeight)) int32_t systemHeight;

  __declspec(property(get = get_systemWidth)) int32_t systemWidth;

  /// @brief Method FireDisplaysUpdated, addr 0x27f9858, size 0x94, virtual false, abstract: false, final false
  static inline void FireDisplaysUpdated();

  /// @brief Method GetRenderingExtImpl, addr 0x27f9270, size 0x54, virtual false, abstract: false, final false
  static inline void GetRenderingExtImpl(void* nativeDisplay, ByRef<int32_t> w, ByRef<int32_t> h);

  /// @brief Method GetSystemExtImpl, addr 0x27f93ec, size 0x54, virtual false, abstract: false, final false
  static inline void GetSystemExtImpl(void* nativeDisplay, ByRef<int32_t> w, ByRef<int32_t> h);

  static inline ::UnityEngine::Display* New_ctor();

  static inline ::UnityEngine::Display* New_ctor(void* nativeDisplay);

  /// @brief Method RecreateDisplayList, addr 0x27f970c, size 0x14c, virtual false, abstract: false, final false
  static inline void RecreateDisplayList(::ArrayW<void*, ::Array<void*>*> nativeDisplay);

  /// @brief Method RelativeMouseAt, addr 0x27f9588, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 RelativeMouseAt(::UnityEngine::Vector3 inputMouseCoordinates);

  /// @brief Method RelativeMouseAtImpl, addr 0x27f9658, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t RelativeMouseAtImpl(int32_t x, int32_t y, ByRef<int32_t> rx, ByRef<int32_t> ry);

  /// @brief Method RequiresSrgbBlitToBackbufferImpl, addr 0x27f954c, size 0x3c, virtual false, abstract: false, final false
  static inline bool RequiresSrgbBlitToBackbufferImpl(void* nativeDisplay);

  constexpr void* const& __cordl_internal_get_nativeDisplay() const;

  constexpr void*& __cordl_internal_get_nativeDisplay();

  constexpr void __cordl_internal_set_nativeDisplay(void* value);

  /// @brief Method .ctor, addr 0x27f9178, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27f91b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(void* nativeDisplay);

  static inline ::UnityEngine::Display* getStaticF__mainDisplay();

  static inline ::ArrayW<::UnityEngine::Display*, ::Array<::UnityEngine::Display*>*> getStaticF_displays();

  static inline int32_t getStaticF_m_ActiveEditorGameViewTarget();

  static inline ::UnityEngine::__Display__DisplaysUpdatedDelegate* getStaticF_onDisplaysUpdated();

  /// @brief Method get_main, addr 0x27f96b4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Display* get_main();

  /// @brief Method get_renderingHeight, addr 0x27f92c4, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_renderingHeight();

  /// @brief Method get_renderingWidth, addr 0x27f91dc, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_renderingWidth();

  /// @brief Method get_requiresSrgbBlitToBackbuffer, addr 0x27f94d4, size 0x78, virtual false, abstract: false, final false
  inline bool get_requiresSrgbBlitToBackbuffer();

  /// @brief Method get_systemHeight, addr 0x27f9440, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_systemHeight();

  /// @brief Method get_systemWidth, addr 0x27f9358, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_systemWidth();

  static inline void setStaticF__mainDisplay(::UnityEngine::Display* value);

  static inline void setStaticF_displays(::ArrayW<::UnityEngine::Display*, ::Array<::UnityEngine::Display*>*> value);

  static inline void setStaticF_m_ActiveEditorGameViewTarget(int32_t value);

  static inline void setStaticF_onDisplaysUpdated(::UnityEngine::__Display__DisplaysUpdatedDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Display();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Display(Display&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Display(Display const&) = delete;

  /// @brief Field nativeDisplay, offset: 0x10, size: 0x8, def value: None
  void* ___nativeDisplay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Display, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Display, ___nativeDisplay) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Display);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Display*, "UnityEngine", "Display");
NEED_NO_BOX(::UnityEngine::__Display__DisplaysUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Display__DisplaysUpdatedDelegate*, "UnityEngine", "Display/DisplaysUpdatedDelegate");
