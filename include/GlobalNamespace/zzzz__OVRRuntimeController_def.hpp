#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRuntimeController)
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace GlobalNamespace {
class __OVRRuntimeController___UpdateControllerModel_d__16;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeController;
}
namespace GlobalNamespace {
class __OVRRuntimeController___UpdateControllerModel_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRuntimeController);
MARK_REF_PTR_T(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16);
// Type: ::<UpdateControllerModel>d__16
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRRuntimeController::<UpdateControllerModel>d__16*
class CORDL_TYPE __OVRRuntimeController___UpdateControllerModel_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRRuntimeController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x16fc488, size 0x120, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16fc5a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x16fc5b0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16fc5f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x16fc484, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::OVRRuntimeController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRRuntimeController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRRuntimeController> value);

  /// @brief Method .ctor, addr 0x16fc3a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRRuntimeController___UpdateControllerModel_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRRuntimeController___UpdateControllerModel_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRRuntimeController___UpdateControllerModel_d__16(__OVRRuntimeController___UpdateControllerModel_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRRuntimeController___UpdateControllerModel_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRRuntimeController___UpdateControllerModel_d__16(__OVRRuntimeController___UpdateControllerModel_d__16 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRRuntimeController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRRuntimeController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRRuntimeController*
class CORDL_TYPE OVRRuntimeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _UpdateControllerModel_d__16 = ::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16;

  /// @brief Field leftControllerModelPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_leftControllerModelPath, put = setStaticF_leftControllerModelPath))::StringW leftControllerModelPath;

  /// @brief Field m_animationNodes, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_animationNodes,
      put = __cordl_internal_set_m_animationNodes))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* m_animationNodes;

  /// @brief Field m_controller, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_controller, put = __cordl_internal_set_m_controller))::GlobalNamespace::__OVRInput__Controller m_controller;

  /// @brief Field m_controllerConnectedPrev, offset 0x43, size 0x1
  __declspec(property(get = __cordl_internal_get_m_controllerConnectedPrev, put = __cordl_internal_set_m_controllerConnectedPrev)) bool m_controllerConnectedPrev;

  /// @brief Field m_controllerModelPath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_controllerModelPath, put = __cordl_internal_set_m_controllerModelPath))::StringW m_controllerModelPath;

  /// @brief Field m_controllerModelShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_controllerModelShader, put = __cordl_internal_set_m_controllerModelShader))::UnityW<::UnityEngine::Shader> m_controllerModelShader;

  /// @brief Field m_controllerObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_controllerObject, put = __cordl_internal_set_m_controllerObject))::UnityW<::UnityEngine::GameObject> m_controllerObject;

  /// @brief Field m_hasInputFocus, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasInputFocus, put = __cordl_internal_set_m_hasInputFocus)) bool m_hasInputFocus;

  /// @brief Field m_hasInputFocusPrev, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasInputFocusPrev, put = __cordl_internal_set_m_hasInputFocusPrev)) bool m_hasInputFocusPrev;

  /// @brief Field m_modelSupported, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_modelSupported, put = __cordl_internal_set_m_modelSupported)) bool m_modelSupported;

  /// @brief Field m_supportAnimation, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_supportAnimation, put = __cordl_internal_set_m_supportAnimation)) bool m_supportAnimation;

  /// @brief Field rightControllerModelPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rightControllerModelPath, put = setStaticF_rightControllerModelPath))::StringW rightControllerModelPath;

  /// @brief Method InputFocusAquired, addr 0x16fc3d0, size 0xc, virtual false, abstract: false, final false
  inline void InputFocusAquired();

  /// @brief Method InputFocusLost, addr 0x16fc3dc, size 0x8, virtual false, abstract: false, final false
  inline void InputFocusLost();

  /// @brief Method IsModelSupported, addr 0x16fbad4, size 0x164, virtual false, abstract: false, final false
  inline bool IsModelSupported(::StringW modelPath);

  /// @brief Method LoadControllerModel, addr 0x16fc0e8, size 0x2c0, virtual false, abstract: false, final false
  inline bool LoadControllerModel(::StringW modelPath);

  static inline ::GlobalNamespace::OVRRuntimeController* New_ctor();

  /// @brief Method Start, addr 0x16fb950, size 0x184, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x16fbca0, size 0x10c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateControllerAnimation, addr 0x16fbdac, size 0x33c, virtual false, abstract: false, final false
  inline void UpdateControllerAnimation();

  /// @brief Method UpdateControllerModel, addr 0x16fbc38, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateControllerModel();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*& __cordl_internal_get_m_animationNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*> const&
  __cordl_internal_get_m_animationNodes() const;

  constexpr ::GlobalNamespace::__OVRInput__Controller const& __cordl_internal_get_m_controller() const;

  constexpr ::GlobalNamespace::__OVRInput__Controller& __cordl_internal_get_m_controller();

  constexpr bool const& __cordl_internal_get_m_controllerConnectedPrev() const;

  constexpr bool& __cordl_internal_get_m_controllerConnectedPrev();

  constexpr ::StringW const& __cordl_internal_get_m_controllerModelPath() const;

  constexpr ::StringW& __cordl_internal_get_m_controllerModelPath();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_controllerModelShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_controllerModelShader();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_controllerObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_controllerObject();

  constexpr bool const& __cordl_internal_get_m_hasInputFocus() const;

  constexpr bool& __cordl_internal_get_m_hasInputFocus();

  constexpr bool const& __cordl_internal_get_m_hasInputFocusPrev() const;

  constexpr bool& __cordl_internal_get_m_hasInputFocusPrev();

  constexpr bool const& __cordl_internal_get_m_modelSupported() const;

  constexpr bool& __cordl_internal_get_m_modelSupported();

  constexpr bool const& __cordl_internal_get_m_supportAnimation() const;

  constexpr bool& __cordl_internal_get_m_supportAnimation();

  constexpr void __cordl_internal_set_m_animationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* value);

  constexpr void __cordl_internal_set_m_controller(::GlobalNamespace::__OVRInput__Controller value);

  constexpr void __cordl_internal_set_m_controllerConnectedPrev(bool value);

  constexpr void __cordl_internal_set_m_controllerModelPath(::StringW value);

  constexpr void __cordl_internal_set_m_controllerModelShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_controllerObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_hasInputFocus(bool value);

  constexpr void __cordl_internal_set_m_hasInputFocusPrev(bool value);

  constexpr void __cordl_internal_set_m_modelSupported(bool value);

  constexpr void __cordl_internal_set_m_supportAnimation(bool value);

  /// @brief Method .ctor, addr 0x16fc3e4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_leftControllerModelPath();

  static inline ::StringW getStaticF_rightControllerModelPath();

  static inline void setStaticF_leftControllerModelPath(::StringW value);

  static inline void setStaticF_rightControllerModelPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRuntimeController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRuntimeController(OVRRuntimeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRuntimeController(OVRRuntimeController const&) = delete;

  /// @brief Field m_controller, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Controller ___m_controller;

  /// @brief Field m_controllerModelShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_controllerModelShader;

  /// @brief Field m_supportAnimation, offset: 0x28, size: 0x1, def value: None
  bool ___m_supportAnimation;

  /// @brief Field m_controllerObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_controllerObject;

  /// @brief Field m_controllerModelPath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_controllerModelPath;

  /// @brief Field m_modelSupported, offset: 0x40, size: 0x1, def value: None
  bool ___m_modelSupported;

  /// @brief Field m_hasInputFocus, offset: 0x41, size: 0x1, def value: None
  bool ___m_hasInputFocus;

  /// @brief Field m_hasInputFocusPrev, offset: 0x42, size: 0x1, def value: None
  bool ___m_hasInputFocusPrev;

  /// @brief Field m_controllerConnectedPrev, offset: 0x43, size: 0x1, def value: None
  bool ___m_controllerConnectedPrev;

  /// @brief Field m_animationNodes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* ___m_animationNodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRuntimeController, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_controller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_controllerModelShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_supportAnimation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_controllerObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_controllerModelPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_modelSupported) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_hasInputFocus) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_hasInputFocusPrev) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_controllerConnectedPrev) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeController, ___m_animationNodes) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeController*, "", "OVRRuntimeController");
NEED_NO_BOX(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16*, "", "OVRRuntimeController/<UpdateControllerModel>d__16");
