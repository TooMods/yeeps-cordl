#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CameraCaptureBridge)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CameraCaptureBridge;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CameraCaptureBridge);
// Type: UnityEngine.Rendering::CameraCaptureBridge
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CameraCaptureBridge*
class CORDL_TYPE CameraCaptureBridge : public ::System::Object {
public:
  // Declarations
  /// @brief Field _enabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__enabled, put = setStaticF__enabled)) bool _enabled;

  /// @brief Field actionDict, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_actionDict, put = setStaticF_actionDict))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Camera>,
      ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>* actionDict;

  /// @brief Method AddCaptureAction, addr 0x17ca278, size 0x150, virtual false, abstract: false, final false
  static inline void AddCaptureAction(::UnityEngine::Camera* camera, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action);

  /// @brief Method GetCaptureActions, addr 0x17ca16c, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
  GetCaptureActions(::UnityEngine::Camera* camera);

  /// @brief Method RemoveCaptureAction, addr 0x17ca3c8, size 0xfc, virtual false, abstract: false, final false
  static inline void RemoveCaptureAction(::UnityEngine::Camera* camera, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action);

  static inline bool getStaticF__enabled();

  static inline ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Camera>, ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>*
  getStaticF_actionDict();

  /// @brief Method get_enabled, addr 0x17ca0b8, size 0x58, virtual false, abstract: false, final false
  static inline bool get_enabled();

  static inline void setStaticF__enabled(bool value);

  static inline void
  setStaticF_actionDict(::System::Collections::Generic::Dictionary_2<
                        ::UnityW<::UnityEngine::Camera>,
                        ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>* value);

  /// @brief Method set_enabled, addr 0x17ca110, size 0x5c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraCaptureBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraCaptureBridge(CameraCaptureBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraCaptureBridge(CameraCaptureBridge const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraCaptureBridge, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CameraCaptureBridge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraCaptureBridge*, "UnityEngine.Rendering", "CameraCaptureBridge");
