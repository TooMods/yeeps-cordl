#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceSource)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Specialized {
class StringDictionary;
}
namespace System::Diagnostics {
struct SourceLevels;
}
namespace System::Diagnostics {
class SourceSwitch;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Diagnostics {
class TraceListenerCollection;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceSource);
// Type: System.Diagnostics::TraceSource
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::TraceSource*
class CORDL_TYPE TraceSource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Listeners))::System::Diagnostics::TraceListenerCollection* Listeners;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Field _initCalled, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__initCalled, put = __cordl_internal_set__initCalled)) bool _initCalled;

  /// @brief Field attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::System::Collections::Specialized::StringDictionary* attributes;

  /// @brief Field internalSwitch, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_internalSwitch, put = __cordl_internal_set_internalSwitch))::System::Diagnostics::SourceSwitch* internalSwitch;

  /// @brief Field listeners, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_listeners, put = __cordl_internal_set_listeners))::System::Diagnostics::TraceListenerCollection* listeners;

  /// @brief Field s_LastCollectionCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_LastCollectionCount, put = setStaticF_s_LastCollectionCount)) int32_t s_LastCollectionCount;

  /// @brief Field sourceName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceName, put = __cordl_internal_set_sourceName))::StringW sourceName;

  /// @brief Field switchLevel, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_switchLevel, put = __cordl_internal_set_switchLevel))::System::Diagnostics::SourceLevels switchLevel;

  /// @brief Field tracesources, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tracesources, put = setStaticF_tracesources))::System::Collections::Generic::List_1<::System::WeakReference*>* tracesources;

  /// @brief Method Close, addr 0x12b8f20, size 0x3f0, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x12b9310, size 0x784, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method Initialize, addr 0x12b8d08, size 0xf0, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::System::Diagnostics::TraceSource* New_ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel);

  /// @brief Method NoConfigInit, addr 0x12b8df8, size 0x128, virtual false, abstract: false, final false
  inline void NoConfigInit();

  /// @brief Method TraceData, addr 0x12b9ed4, size 0x428, virtual false, abstract: false, final false
  inline void TraceData(::System::Diagnostics::TraceEventType eventType, int32_t id, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data);

  /// @brief Method TraceData, addr 0x12b9a94, size 0x428, virtual false, abstract: false, final false
  inline void TraceData(::System::Diagnostics::TraceEventType eventType, int32_t id, ::System::Object* data);

  constexpr bool const& __cordl_internal_get__initCalled() const;

  constexpr bool& __cordl_internal_get__initCalled();

  constexpr ::System::Collections::Specialized::StringDictionary*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::StringDictionary*> const& __cordl_internal_get_attributes() const;

  constexpr ::System::Diagnostics::SourceSwitch*& __cordl_internal_get_internalSwitch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::SourceSwitch*> const& __cordl_internal_get_internalSwitch() const;

  constexpr ::System::Diagnostics::TraceListenerCollection*& __cordl_internal_get_listeners();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::TraceListenerCollection*> const& __cordl_internal_get_listeners() const;

  constexpr ::StringW const& __cordl_internal_get_sourceName() const;

  constexpr ::StringW& __cordl_internal_get_sourceName();

  constexpr ::System::Diagnostics::SourceLevels const& __cordl_internal_get_switchLevel() const;

  constexpr ::System::Diagnostics::SourceLevels& __cordl_internal_get_switchLevel();

  constexpr void __cordl_internal_set__initCalled(bool value);

  constexpr void __cordl_internal_set_attributes(::System::Collections::Specialized::StringDictionary* value);

  constexpr void __cordl_internal_set_internalSwitch(::System::Diagnostics::SourceSwitch* value);

  constexpr void __cordl_internal_set_listeners(::System::Diagnostics::TraceListenerCollection* value);

  constexpr void __cordl_internal_set_sourceName(::StringW value);

  constexpr void __cordl_internal_set_switchLevel(::System::Diagnostics::SourceLevels value);

  /// @brief Method .ctor, addr 0x12b85a4, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel);

  /// @brief Method _pruneCachedTraceSources, addr 0x12b8824, size 0x4e4, virtual false, abstract: false, final false
  static inline void _pruneCachedTraceSources();

  static inline int32_t getStaticF_s_LastCollectionCount();

  static inline ::System::Collections::Generic::List_1<::System::WeakReference*>* getStaticF_tracesources();

  /// @brief Method get_Listeners, addr 0x12ba2fc, size 0x20, virtual false, abstract: false, final false
  inline ::System::Diagnostics::TraceListenerCollection* get_Listeners();

  /// @brief Method get_Name, addr 0x12b9ebc, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  static inline void setStaticF_s_LastCollectionCount(int32_t value);

  static inline void setStaticF_tracesources(::System::Collections::Generic::List_1<::System::WeakReference*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceSource(TraceSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceSource(TraceSource const&) = delete;

  /// @brief Field internalSwitch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::SourceSwitch* ___internalSwitch;

  /// @brief Field listeners, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::TraceListenerCollection* ___listeners;

  /// @brief Field attributes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Specialized::StringDictionary* ___attributes;

  /// @brief Field switchLevel, offset: 0x28, size: 0x4, def value: None
  ::System::Diagnostics::SourceLevels ___switchLevel;

  /// @brief Field sourceName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___sourceName;

  /// @brief Field _initCalled, offset: 0x38, size: 0x1, def value: None
  bool ____initCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceSource, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___internalSwitch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___listeners) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___attributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___switchLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___sourceName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ____initCalled) == 0x38, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceSource*, "System.Diagnostics", "TraceSource");
