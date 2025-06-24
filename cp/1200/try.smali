.class public final Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation runtime Lkotlin/Metadata;
.end annotation


# static fields
.field public static final $stable:I


# instance fields
.field private final asleb:Ljava/lang/String;

.field private final gvnsv:Ljava/lang/String;

.field private final gzoyd:Ljava/lang/String;

.field private final qguhl:Ljava/lang/String;

.field private final vgipq:I

.field private final zbwho:Ljava/lang/Integer;

.field private final zfxao:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V
    .registers 9

    const-string v0, "zfxao"

    invoke-static {p2, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "asleb"

    invoke-static {p3, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "gvnsv"

    invoke-static {p4, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "gzoyd"

    invoke-static {p5, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput p1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    .line 3
    iput-object p2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    .line 4
    iput-object p3, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    .line 5
    iput-object p4, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    .line 6
    iput-object p5, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    .line 7
    iput-object p6, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    .line 8
    iput-object p7, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    return-void
.end method

.method public synthetic constructor <init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;ILkotlin/jvm/internal/DefaultConstructorMarker;)V
    .registers 19

    and-int/lit8 v0, p8, 0x1

    if-eqz v0, :cond_7

    const/4 v0, 0x1

    move v2, v0

    goto :goto_8

    :cond_7
    move v2, p1

    :goto_8
    and-int/lit8 v0, p8, 0x20

    const/4 v1, 0x0

    if-eqz v0, :cond_f

    move-object v7, v1

    goto :goto_10

    :cond_f
    move-object v7, p6

    :goto_10
    and-int/lit8 v0, p8, 0x40

    if-eqz v0, :cond_16

    move-object v8, v1

    goto :goto_18

    :cond_16
    move-object/from16 v8, p7

    :goto_18
    move-object v1, p0

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    .line 9
    invoke-direct/range {v1 .. v8}, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V

    return-void
.end method

.method public static synthetic copy$default(Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;ILjava/lang/Object;)Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;
    .registers 15

    and-int/lit8 p9, p8, 0x1

    if-eqz p9, :cond_6

    iget p1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    :cond_6
    and-int/lit8 p9, p8, 0x2

    if-eqz p9, :cond_c

    iget-object p2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    :cond_c
    move-object p9, p2

    and-int/lit8 p2, p8, 0x4

    if-eqz p2, :cond_13

    iget-object p3, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    :cond_13
    move-object v0, p3

    and-int/lit8 p2, p8, 0x8

    if-eqz p2, :cond_1a

    iget-object p4, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    :cond_1a
    move-object v1, p4

    and-int/lit8 p2, p8, 0x10

    if-eqz p2, :cond_21

    iget-object p5, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    :cond_21
    move-object v2, p5

    and-int/lit8 p2, p8, 0x20

    if-eqz p2, :cond_28

    iget-object p6, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    :cond_28
    move-object v3, p6

    and-int/lit8 p2, p8, 0x40

    if-eqz p2, :cond_2f

    iget-object p7, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    :cond_2f
    move-object v4, p7

    move-object p2, p0

    move p3, p1

    move-object p4, p9

    move-object p5, v0

    move-object p6, v1

    move-object p7, v2

    move-object p8, v3

    move-object p9, v4

    invoke-virtual/range {p2 .. p9}, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->copy(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final component1()I
    .registers 2

    iget v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    return v0
.end method

.method public final component2()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    return-object v0
.end method

.method public final component3()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    return-object v0
.end method

.method public final component4()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    return-object v0
.end method

.method public final component5()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    return-object v0
.end method

.method public final component6()Ljava/lang/Integer;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    return-object v0
.end method

.method public final component7()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    return-object v0
.end method

.method public final copy(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;
    .registers 17

    const-string v0, "zfxao"

    move-object v3, p2

    invoke-static {p2, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "asleb"

    move-object v4, p3

    invoke-static {p3, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "gvnsv"

    move-object v5, p4

    invoke-static {p4, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "gzoyd"

    move-object v6, p5

    invoke-static {p5, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    new-instance v0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;

    move-object v1, v0

    move v2, p1

    move-object v7, p6

    move-object/from16 v8, p7

    invoke-direct/range {v1 .. v8}, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V

    return-object v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .registers 6

    const/4 v0, 0x1

    if-ne p0, p1, :cond_4

    return v0

    :cond_4
    instance-of v1, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;

    const/4 v2, 0x0

    if-nez v1, :cond_a

    return v2

    :cond_a
    check-cast p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;

    iget v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    iget v3, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    if-eq v1, v3, :cond_13

    return v2

    :cond_13
    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    iget-object v3, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    invoke-static {v1, v3}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1e

    return v2

    :cond_1e
    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    iget-object v3, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    invoke-static {v1, v3}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_29

    return v2

    :cond_29
    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    iget-object v3, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    invoke-static {v1, v3}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_34

    return v2

    :cond_34
    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    iget-object v3, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    invoke-static {v1, v3}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3f

    return v2

    :cond_3f
    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4a

    return v2

    :cond_4a
    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    iget-object p1, p1, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    invoke-static {v1, p1}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_55

    return v2

    :cond_55
    return v0
.end method

.method public final getAsleb()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    return-object v0
.end method

.method public final getGvnsv()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    return-object v0
.end method

.method public final getGzoyd()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    return-object v0
.end method

.method public final getQguhl()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    return-object v0
.end method

.method public final getVgipq()I
    .registers 2

    iget v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    return v0
.end method

.method public final getZbwho()Ljava/lang/Integer;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    return-object v0
.end method

.method public final getZfxao()Ljava/lang/String;
    .registers 2

    iget-object v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    return-object v0
.end method

.method public hashCode()I
    .registers 5

    iget v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    invoke-static {v0}, Ljava/lang/Integer;->hashCode(I)I

    move-result v0

    const/16 v1, 0x1f

    mul-int/2addr v0, v1

    iget-object v2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    invoke-static {v0, v1, v2}, LA0/Z;->f(IILjava/lang/String;)I

    move-result v0

    iget-object v2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    invoke-static {v0, v1, v2}, LA0/Z;->f(IILjava/lang/String;)I

    move-result v0

    iget-object v2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    invoke-static {v0, v1, v2}, LA0/Z;->f(IILjava/lang/String;)I

    move-result v0

    iget-object v2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    invoke-static {v0, v1, v2}, LA0/Z;->f(IILjava/lang/String;)I

    move-result v0

    iget-object v2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    const/4 v3, 0x0

    if-nez v2, :cond_28

    move v2, v3

    goto :goto_2c

    :cond_28
    invoke-virtual {v2}, Ljava/lang/Object;->hashCode()I

    move-result v2

    :goto_2c
    add-int/2addr v0, v2

    mul-int/2addr v0, v1

    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    if-nez v1, :cond_33

    goto :goto_37

    :cond_33
    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v3

    :goto_37
    add-int/2addr v0, v3

    return v0
.end method

.method public toString()Ljava/lang/String;
    .registers 10

    iget v0, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->vgipq:I

    iget-object v1, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zfxao:Ljava/lang/String;

    iget-object v2, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->asleb:Ljava/lang/String;

    iget-object v3, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gvnsv:Ljava/lang/String;

    iget-object v4, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->gzoyd:Ljava/lang/String;

    iget-object v5, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->zbwho:Ljava/lang/Integer;

    iget-object v6, p0, Lcom/pixjoyai/artfxgenius/fantasyfxmaker/entities/GoogleLoginRequest;->qguhl:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "GoogleLoginRequest(vgipq="

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

   invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ", zfxao="

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", asleb="

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", gvnsv="

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", gzoyd="

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", zbwho="

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ", qguhl="

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ")"

    invoke-static {v7, v6, v0}, LY3/a;->k(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
