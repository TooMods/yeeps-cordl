#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(VolumeStack)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeStack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeStack);
// Type: UnityEngine.Rendering::VolumeStack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::VolumeStack*
class CORDL_TYPE VolumeStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field components, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_components,
                      put = __cordl_internal_set_components))::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components;

  /// @brief Field defaultParameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultParameters, put = __cordl_internal_set_defaultParameters))::ArrayW<
      ::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
      ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*> defaultParameters;

  /// @brief Field requiresReset, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_requiresReset, put = __cordl_internal_set_requiresReset)) bool requiresReset;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x1d90708, size 0x19c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetComponent, addr 0x1d90698, size 0x70, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> GetComponent(::System::Type* type);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  static inline ::UnityEngine::Rendering::VolumeStack* New_ctor();

  /// @brief Method Reload, addr 0x1d902b0, size 0x3e8, virtual false, abstract: false, final false
  inline void Reload(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* componentDefaultStates);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_components();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*> const&
  __cordl_internal_get_components() const;

  constexpr ::ArrayW<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
                     ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*> const&
  __cordl_internal_get_defaultParameters() const;

  constexpr ::ArrayW<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
                     ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*>&
  __cordl_internal_get_defaultParameters();

  constexpr bool const& __cordl_internal_get_requiresReset() const;

  constexpr bool& __cordl_internal_get_requiresReset();

  constexpr void __cordl_internal_set_components(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

  constexpr void __cordl_internal_set_defaultParameters(::ArrayW<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
                                                                 ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*>
                                                            value);

  constexpr void __cordl_internal_set_requiresReset(bool value);

  /// @brief Method .ctor, addr 0x1d9022c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeStack(VolumeStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeStack(VolumeStack const&) = delete;

  /// @brief Field components, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* ___components;

  /// @brief Field defaultParameters, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
           ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*>
      ___defaultParameters;

  /// @brief Field requiresReset, offset: 0x20, size: 0x1, def value: None
  bool ___requiresReset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeStack, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ___components) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ___defaultParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ___requiresReset) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeStack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeStack*, "UnityEngine.Rendering", "VolumeStack");
