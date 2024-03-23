#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisposableManagerSingleton)
namespace System {
class IDisposable;
}
namespace Unity::XR::CoreUtils::Collections {
template <typename T> class HashSetList_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class DisposableManagerSingleton;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::DisposableManagerSingleton
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::DisposableManagerSingleton*
class CORDL_TYPE DisposableManagerSingleton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_Disposables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Disposables, put = __cordl_internal_set_m_Disposables))::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>* m_Disposables;

  /// @brief Field s_DisposableManagerSingleton, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DisposableManagerSingleton,
                             put = setStaticF_s_DisposableManagerSingleton))::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> s_DisposableManagerSingleton;

  /// @brief Method Awake, addr 0x301e668, size 0x120, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DisposeAll, addr 0x301e78c, size 0x1e8, virtual false, abstract: false, final false
  inline void DisposeAll();

  /// @brief Method Initialize, addr 0x301e544, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> Initialize();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x301e974, size 0x4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnDestroy, addr 0x301e788, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RegisterDisposable, addr 0x301e978, size 0x5c, virtual false, abstract: false, final false
  static inline void RegisterDisposable(::System::IDisposable* disposableToRegister);

  constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>*& __cordl_internal_get_m_Disposables();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>*> const& __cordl_internal_get_m_Disposables() const;

  constexpr void __cordl_internal_set_m_Disposables(::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>* value);

  /// @brief Method .ctor, addr 0x301e9d4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> getStaticF_s_DisposableManagerSingleton();

  /// @brief Method get_instance, addr 0x301e540, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> get_instance();

  static inline void setStaticF_s_DisposableManagerSingleton(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManagerSingleton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManagerSingleton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManagerSingleton(DisposableManagerSingleton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManagerSingleton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManagerSingleton(DisposableManagerSingleton const&) = delete;

  /// @brief Field m_Disposables, offset: 0x18, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>* ___m_Disposables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton, ___m_Disposables) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "DisposableManagerSingleton");
