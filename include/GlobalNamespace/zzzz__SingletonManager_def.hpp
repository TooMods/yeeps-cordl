#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SingletonManager)
namespace GlobalNamespace {
class __SingletonManager__OnSceneLoaded;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SingletonManager;
}
namespace GlobalNamespace {
class __SingletonManager__OnSceneLoaded;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SingletonManager);
MARK_REF_PTR_T(::GlobalNamespace::__SingletonManager__OnSceneLoaded);
// Type: ::OnSceneLoaded
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SingletonManager::OnSceneLoaded*
class CORDL_TYPE __SingletonManager__OnSceneLoaded : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf2adc0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf2ade0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf2adac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__SingletonManager__OnSceneLoaded* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf2acf0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SingletonManager__OnSceneLoaded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SingletonManager__OnSceneLoaded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SingletonManager__OnSceneLoaded(__SingletonManager__OnSceneLoaded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SingletonManager__OnSceneLoaded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SingletonManager__OnSceneLoaded(__SingletonManager__OnSceneLoaded const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SingletonManager__OnSceneLoaded, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SingletonManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SingletonManager*
class CORDL_TYPE SingletonManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnSceneLoaded = ::GlobalNamespace::__SingletonManager__OnSceneLoaded;

  /// @brief Field onSceneLoadedCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onSceneLoadedCallbacks, put = setStaticF_onSceneLoadedCallbacks))::GlobalNamespace::__SingletonManager__OnSceneLoaded* onSceneLoadedCallbacks;

  /// @brief Method Awake, addr 0xf2abd0, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::SingletonManager* New_ctor();

  /// @brief Method OnNewSceneLoaded, addr 0xf2abd4, size 0x68, virtual false, abstract: false, final false
  static inline void OnNewSceneLoaded();

  /// @brief Method Register, addr 0xf2ac3c, size 0xac, virtual false, abstract: false, final false
  static inline void Register(::GlobalNamespace::__SingletonManager__OnSceneLoaded* onSceneLoaded);

  /// @brief Method .ctor, addr 0xf2ace8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SingletonManager__OnSceneLoaded* getStaticF_onSceneLoadedCallbacks();

  static inline void setStaticF_onSceneLoadedCallbacks(::GlobalNamespace::__SingletonManager__OnSceneLoaded* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingletonManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingletonManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingletonManager(SingletonManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingletonManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingletonManager(SingletonManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SingletonManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SingletonManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SingletonManager*, "", "SingletonManager");
NEED_NO_BOX(::GlobalNamespace::__SingletonManager__OnSceneLoaded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SingletonManager__OnSceneLoaded*, "", "SingletonManager/OnSceneLoaded");
