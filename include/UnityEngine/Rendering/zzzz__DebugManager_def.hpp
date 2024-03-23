#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
namespace UnityEngine::Rendering {
class DebugActionState;
}
namespace UnityEngine::Rendering {
struct DebugAction;
}
namespace UnityEngine::Rendering {
class IDebugData;
}
namespace UnityEngine::Rendering {
class __DebugManager____c;
}
namespace UnityEngine::Rendering {
class __DebugUI__IContainer;
}
namespace UnityEngine::Rendering {
class __DebugUI__Panel;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugManager;
}
namespace UnityEngine::Rendering {
class __DebugManager____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugManager);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugManager::<>c*
class CORDL_TYPE __DebugManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__DebugManager____c* __9;

  /// @brief Field <>9__61_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__61_0, put = setStaticF___9__61_0))::System::Action_1<bool>* __9__61_0;

  /// @brief Field <>9__61_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__61_1, put = setStaticF___9__61_1))::System::Action* __9__61_1;

  static inline ::UnityEngine::Rendering::__DebugManager____c* New_ctor();

  /// @brief Method <.cctor>b__81_0, addr 0x1bd5b68, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugManager* __cctor_b__81_0();

  /// @brief Method <.ctor>b__61_0, addr 0x1bd5b60, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__61_0(bool _p0_);

  /// @brief Method <.ctor>b__61_1, addr 0x1bd5b64, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__61_1();

  /// @brief Method .ctor, addr 0x1bd5b58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__DebugManager____c* getStaticF___9();

  static inline ::System::Action_1<bool>* getStaticF___9__61_0();

  static inline ::System::Action* getStaticF___9__61_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::__DebugManager____c* value);

  static inline void setStaticF___9__61_0(::System::Action_1<bool>* value);

  static inline void setStaticF___9__61_1(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugManager____c(__DebugManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugManager____c(__DebugManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugManager____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::DebugManager
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 130, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DebugManager*
class CORDL_TYPE DebugManager : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::__DebugManager____c;

  /// @brief Field debugActionMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_debugActionMap, put = __cordl_internal_set_debugActionMap))::UnityEngine::InputSystem::InputActionMap* debugActionMap;

  __declspec(property(get = get_displayEditorUI)) bool displayEditorUI;

  __declspec(property(get = get_displayPersistentRuntimeUI, put = set_displayPersistentRuntimeUI)) bool displayPersistentRuntimeUI;

  __declspec(property(get = get_displayRuntimeUI, put = set_displayRuntimeUI)) bool displayRuntimeUI;

  __declspec(property(get = get_enableRuntimeUI, put = set_enableRuntimeUI)) bool enableRuntimeUI;

  /// @brief Field m_DebugActionStates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugActionStates,
                      put = __cordl_internal_set_m_DebugActionStates))::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*> m_DebugActionStates;

  /// @brief Field m_DebugActions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugActions,
                      put = __cordl_internal_set_m_DebugActions))::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*> m_DebugActions;

  /// @brief Field m_EditorOpen, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EditorOpen, put = __cordl_internal_set_m_EditorOpen)) bool m_EditorOpen;

  /// @brief Field m_EnableRuntimeUI, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRuntimeUI, put = __cordl_internal_set_m_EnableRuntimeUI)) bool m_EnableRuntimeUI;

  /// @brief Field m_Panels, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panels, put = __cordl_internal_set_m_Panels))::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Panel*>* m_Panels;

  /// @brief Field m_PersistentRoot, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PersistentRoot, put = __cordl_internal_set_m_PersistentRoot))::UnityW<::UnityEngine::GameObject> m_PersistentRoot;

  /// @brief Field m_ReadOnlyPanels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReadOnlyPanels,
                      put = __cordl_internal_set_m_ReadOnlyPanels))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::__DebugUI__Panel*>* m_ReadOnlyPanels;

  /// @brief Field m_RequestedPanelIndex, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestedPanelIndex, put = __cordl_internal_set_m_RequestedPanelIndex))::System::Nullable_1<int32_t> m_RequestedPanelIndex;

  /// @brief Field m_Root, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Root, put = __cordl_internal_set_m_Root))::UnityW<::UnityEngine::GameObject> m_Root;

  /// @brief Field m_RootUICanvas, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootUICanvas, put = __cordl_internal_set_m_RootUICanvas))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> m_RootUICanvas;

  /// @brief Field m_RootUIPersistentCanvas, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootUIPersistentCanvas,
                      put = __cordl_internal_set_m_RootUIPersistentCanvas))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> m_RootUIPersistentCanvas;

  /// @brief Field onDisplayRuntimeUIChanged, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onDisplayRuntimeUIChanged, put = __cordl_internal_set_onDisplayRuntimeUIChanged))::System::Action_1<bool>* onDisplayRuntimeUIChanged;

  /// @brief Field onSetDirty, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetDirty, put = __cordl_internal_set_onSetDirty))::System::Action* onSetDirty;

  __declspec(property(get = get_panels))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::__DebugUI__Panel*>* panels;

  /// @brief Field refreshEditorRequested, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_refreshEditorRequested, put = __cordl_internal_set_refreshEditorRequested)) bool refreshEditorRequested;

  /// @brief Field resetData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_resetData, put = __cordl_internal_set_resetData))::System::Action* resetData;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* s_Instance;

  /// @brief Method AddAction, addr 0x1bd2ccc, size 0xe4, virtual false, abstract: false, final false
  inline void AddAction(::UnityEngine::Rendering::DebugAction action, ::UnityEngine::Rendering::DebugActionDesc* desc);

  /// @brief Method ChangeSelection, addr 0x1bd5094, size 0x20, virtual false, abstract: false, final false
  inline void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext);

  /// @brief Method EnableInputActions, addr 0x1bd2db0, size 0x270, virtual false, abstract: false, final false
  inline void EnableInputActions();

  /// @brief Method EnsurePersistentCanvas, addr 0x1bd4944, size 0x1f4, virtual false, abstract: false, final false
  inline void EnsurePersistentCanvas();

  /// @brief Method GetAction, addr 0x1bd3428, size 0x38, virtual false, abstract: false, final false
  inline float_t GetAction(::UnityEngine::Rendering::DebugAction action);

  /// @brief Method GetActionReleaseScrollTarget, addr 0x1bd36bc, size 0x138, virtual false, abstract: false, final false
  inline bool GetActionReleaseScrollTarget();

  /// @brief Method GetActionToggleDebugMenuWithTouch, addr 0x1bd3460, size 0x25c, virtual false, abstract: false, final false
  inline bool GetActionToggleDebugMenuWithTouch();

  /// @brief Method GetItem, addr 0x1bd5510, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__Widget* GetItem(::StringW queryPath);

  /// @brief Method GetItem, addr 0x1bd5674, size 0x378, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__Widget* GetItem(::StringW queryPath, ::UnityEngine::Rendering::__DebugUI__IContainer* container);

  /// @brief Method GetPanel, addr 0x1bce490, size 0x2ec, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__Panel* GetPanel(::StringW displayName, bool createIfNull, int32_t groupIndex, bool overrideIfExist);

  /// @brief Method GetRequestedEditorWindowPanelIndex, addr 0x1bd52c0, size 0x10, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> GetRequestedEditorWindowPanelIndex();

  /// @brief Method GetState, addr 0x1bd4ef8, size 0x168, virtual false, abstract: false, final false
  inline int32_t GetState();

  static inline ::UnityEngine::Rendering::DebugManager* New_ctor();

  /// @brief Method OnPanelDirty, addr 0x1bd5234, size 0x24, virtual false, abstract: false, final false
  inline void OnPanelDirty(::UnityEngine::Rendering::__DebugUI__Panel* panel);

  /// @brief Method ReDrawOnScreenDebug, addr 0x1bd4d74, size 0x2c, virtual false, abstract: false, final false
  inline void ReDrawOnScreenDebug();

  /// @brief Method RefreshEditor, addr 0x1bd4d3c, size 0xc, virtual false, abstract: false, final false
  inline void RefreshEditor();

  /// @brief Method RegisterActions, addr 0x1bd28e0, size 0x3e4, virtual false, abstract: false, final false
  inline void RegisterActions();

  /// @brief Method RegisterData, addr 0x1bd4da0, size 0xac, virtual false, abstract: false, final false
  inline void RegisterData(::UnityEngine::Rendering::IDebugData* data);

  /// @brief Method RegisterInputs, addr 0x1bd37f4, size 0x970, virtual false, abstract: false, final false
  inline void RegisterInputs();

  /// @brief Method RegisterRootCanvas, addr 0x1bd5060, size 0x34, virtual false, abstract: false, final false
  inline void RegisterRootCanvas(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* root);

  /// @brief Method RemovePanel, addr 0x1bd5340, size 0x1d0, virtual false, abstract: false, final false
  inline void RemovePanel(::StringW displayName);

  /// @brief Method RemovePanel, addr 0x1bd52d0, size 0x70, virtual false, abstract: false, final false
  inline void RemovePanel(::UnityEngine::Rendering::__DebugUI__Panel* panel);

  /// @brief Method RequestEditorWindowPanelIndex, addr 0x1bd5258, size 0x68, virtual false, abstract: false, final false
  inline void RequestEditorWindowPanelIndex(int32_t index);

  /// @brief Method Reset, addr 0x1bd4d48, size 0x2c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SampleAction, addr 0x1bd3028, size 0x138, virtual false, abstract: false, final false
  inline void SampleAction(int32_t actionIndex);

  /// @brief Method SetScrollTarget, addr 0x1bd50b4, size 0x98, virtual false, abstract: false, final false
  inline void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget);

  /// @brief Method ToggleEditorUI, addr 0x1bd45dc, size 0xc, virtual false, abstract: false, final false
  inline void ToggleEditorUI(bool open);

  /// @brief Method TogglePersistent, addr 0x1bd514c, size 0xe8, virtual false, abstract: false, final false
  inline void TogglePersistent(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  /// @brief Method UnregisterData, addr 0x1bd4e4c, size 0xac, virtual false, abstract: false, final false
  inline void UnregisterData(::UnityEngine::Rendering::IDebugData* data);

  /// @brief Method UpdateAction, addr 0x1bd31cc, size 0x64, virtual false, abstract: false, final false
  inline void UpdateAction(int32_t actionIndex);

  /// @brief Method UpdateActions, addr 0x1bd33d0, size 0x58, virtual false, abstract: false, final false
  inline void UpdateActions();

  /// @brief Method UpdateReadOnlyCollection, addr 0x1bd4164, size 0x7c, virtual false, abstract: false, final false
  inline void UpdateReadOnlyCollection();

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __cordl_internal_get_debugActionMap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionMap*> const& __cordl_internal_get_debugActionMap() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*> const& __cordl_internal_get_m_DebugActionStates() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*>& __cordl_internal_get_m_DebugActionStates();

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*> const& __cordl_internal_get_m_DebugActions() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*>& __cordl_internal_get_m_DebugActions();

  constexpr bool const& __cordl_internal_get_m_EditorOpen() const;

  constexpr bool& __cordl_internal_get_m_EditorOpen();

  constexpr bool const& __cordl_internal_get_m_EnableRuntimeUI() const;

  constexpr bool& __cordl_internal_get_m_EnableRuntimeUI();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Panel*>*& __cordl_internal_get_m_Panels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Panel*>*> const& __cordl_internal_get_m_Panels() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_PersistentRoot() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_PersistentRoot();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::__DebugUI__Panel*>*& __cordl_internal_get_m_ReadOnlyPanels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::__DebugUI__Panel*>*> const&
  __cordl_internal_get_m_ReadOnlyPanels() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_m_RequestedPanelIndex() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_m_RequestedPanelIndex();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Root() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Root();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> const& __cordl_internal_get_m_RootUICanvas() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>& __cordl_internal_get_m_RootUICanvas();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> const& __cordl_internal_get_m_RootUIPersistentCanvas() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>& __cordl_internal_get_m_RootUIPersistentCanvas();

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_onDisplayRuntimeUIChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_onDisplayRuntimeUIChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_onSetDirty();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onSetDirty() const;

  constexpr bool const& __cordl_internal_get_refreshEditorRequested() const;

  constexpr bool& __cordl_internal_get_refreshEditorRequested();

  constexpr ::System::Action*& __cordl_internal_get_resetData();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_resetData() const;

  constexpr void __cordl_internal_set_debugActionMap(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr void __cordl_internal_set_m_DebugActionStates(::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*> value);

  constexpr void __cordl_internal_set_m_DebugActions(::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*> value);

  constexpr void __cordl_internal_set_m_EditorOpen(bool value);

  constexpr void __cordl_internal_set_m_EnableRuntimeUI(bool value);

  constexpr void __cordl_internal_set_m_Panels(::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value);

  constexpr void __cordl_internal_set_m_PersistentRoot(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ReadOnlyPanels(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value);

  constexpr void __cordl_internal_set_m_RequestedPanelIndex(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set_m_Root(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_RootUICanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> value);

  constexpr void __cordl_internal_set_m_RootUIPersistentCanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> value);

  constexpr void __cordl_internal_set_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set_onSetDirty(::System::Action* value);

  constexpr void __cordl_internal_set_refreshEditorRequested(bool value);

  constexpr void __cordl_internal_set_resetData(::System::Action* value);

  /// @brief Method .ctor, addr 0x1bd4b38, size 0x204, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onDisplayRuntimeUIChanged, addr 0x1bd4204, size 0xb0, virtual false, abstract: false, final false
  inline void add_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value);

  /// @brief Method add_onSetDirty, addr 0x1bd4364, size 0x9c, virtual false, abstract: false, final false
  inline void add_onSetDirty(::System::Action* value);

  /// @brief Method add_resetData, addr 0x1bd449c, size 0x9c, virtual false, abstract: false, final false
  inline void add_resetData(::System::Action* value);

  static inline ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* getStaticF_s_Instance();

  /// @brief Method get_displayEditorUI, addr 0x1bd45d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_displayEditorUI();

  /// @brief Method get_displayPersistentRuntimeUI, addr 0x1bd483c, size 0x88, virtual false, abstract: false, final false
  inline bool get_displayPersistentRuntimeUI();

  /// @brief Method get_displayRuntimeUI, addr 0x1bcf85c, size 0x88, virtual false, abstract: false, final false
  inline bool get_displayRuntimeUI();

  /// @brief Method get_enableRuntimeUI, addr 0x1bd45e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRuntimeUI();

  /// @brief Method get_instance, addr 0x1bce418, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugManager* get_instance();

  /// @brief Method get_panels, addr 0x1bd41e0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::__DebugUI__Panel*>* get_panels();

  /// @brief Method remove_onDisplayRuntimeUIChanged, addr 0x1bd42b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value);

  /// @brief Method remove_onSetDirty, addr 0x1bd4400, size 0x9c, virtual false, abstract: false, final false
  inline void remove_onSetDirty(::System::Action* value);

  /// @brief Method remove_resetData, addr 0x1bd4538, size 0x9c, virtual false, abstract: false, final false
  inline void remove_resetData(::System::Action* value);

  static inline void setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* value);

  /// @brief Method set_displayPersistentRuntimeUI, addr 0x1bd48c4, size 0x80, virtual false, abstract: false, final false
  inline void set_displayPersistentRuntimeUI(bool value);

  /// @brief Method set_displayRuntimeUI, addr 0x1bd4614, size 0x228, virtual false, abstract: false, final false
  inline void set_displayRuntimeUI(bool value);

  /// @brief Method set_enableRuntimeUI, addr 0x1bd45f0, size 0x24, virtual false, abstract: false, final false
  inline void set_enableRuntimeUI(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager(DebugManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager(DebugManager const&) = delete;

  /// @brief Field m_DebugActions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*> ___m_DebugActions;

  /// @brief Field m_DebugActionStates, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*> ___m_DebugActionStates;

  /// @brief Field debugActionMap, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___debugActionMap;

  /// @brief Field m_ReadOnlyPanels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::__DebugUI__Panel*>* ___m_ReadOnlyPanels;

  /// @brief Field m_Panels, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Panel*>* ___m_Panels;

  /// @brief Field onDisplayRuntimeUIChanged, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<bool>* ___onDisplayRuntimeUIChanged;

  /// @brief Field onSetDirty, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___onSetDirty;

  /// @brief Field resetData, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___resetData;

  /// @brief Field refreshEditorRequested, offset: 0x50, size: 0x1, def value: None
  bool ___refreshEditorRequested;

  /// @brief Field m_RequestedPanelIndex, offset: 0x54, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___m_RequestedPanelIndex;

  /// @brief Field m_Root, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Root;

  /// @brief Field m_RootUICanvas, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> ___m_RootUICanvas;

  /// @brief Field m_PersistentRoot, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_PersistentRoot;

  /// @brief Field m_RootUIPersistentCanvas, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> ___m_RootUIPersistentCanvas;

  /// @brief Field m_EditorOpen, offset: 0x80, size: 0x1, def value: None
  bool ___m_EditorOpen;

  /// @brief Field m_EnableRuntimeUI, offset: 0x81, size: 0x1, def value: None
  bool ___m_EnableRuntimeUI;

  /// @brief Field kDPadHorizontal offset 0xffffffff size 0x8
  static constexpr ::ConstString kDPadHorizontal{ u"Debug Horizontal" };

  /// @brief Field kDPadVertical offset 0xffffffff size 0x8
  static constexpr ::ConstString kDPadVertical{ u"Debug Vertical" };

  /// @brief Field kDebugNextBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kDebugNextBtn{ u"Debug Next" };

  /// @brief Field kDebugPreviousBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kDebugPreviousBtn{ u"Debug Previous" };

  /// @brief Field kEnableDebug offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnableDebug{ u"Enable Debug" };

  /// @brief Field kEnableDebugBtn1 offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnableDebugBtn1{ u"Enable Debug Button 1" };

  /// @brief Field kEnableDebugBtn2 offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnableDebugBtn2{ u"Enable Debug Button 2" };

  /// @brief Field kMultiplierBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplierBtn{ u"Debug Multiplier" };

  /// @brief Field kPersistentBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kPersistentBtn{ u"Debug Persistent" };

  /// @brief Field kResetBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kResetBtn{ u"Debug Reset" };

  /// @brief Field kValidateBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kValidateBtn{ u"Debug Validate" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugManager, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_DebugActions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_DebugActionStates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___debugActionMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_ReadOnlyPanels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_Panels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___onDisplayRuntimeUIChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___onSetDirty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___resetData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___refreshEditorRequested) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RequestedPanelIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_Root) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RootUICanvas) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_PersistentRoot) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RootUIPersistentCanvas) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_EditorOpen) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_EnableRuntimeUI) == 0x81, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugManager*, "UnityEngine.Rendering", "DebugManager");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugManager____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugManager____c*, "UnityEngine.Rendering", "DebugManager/<>c");
